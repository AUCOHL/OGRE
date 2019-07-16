#include "salt.h"

#include "Saltflute.h"
#include "rsa.h"
#include "refine.h"

namespace salt {

void SaltBase::Init(Tree& minTree, shared_ptr<Pin> srcP) {
// ofstream mytxt ("out.txt");
   // minTree.Print(mytxt);
minTree.UpdateId();

auto mtNodes = minTree.ObtainNodes();

slNodes.resize(mtNodes.size());
shortestDists.resize(mtNodes.size());
curDists.resize(mtNodes.size());
for (auto mtN : mtNodes)
{
    printf("mtN->id: %d mtNodes.size(): %d\n", mtN->id, mtNodes.size());
    slNodes[mtN->id] = make_shared<TreeNode>(mtN->loc, mtN->pin, mtN->id);
    // puts("here21");
    shortestDists[mtN->id] = Dist(mtN->loc, srcP->loc);
    // puts("here22");
    curDists[mtN->id] = numeric_limits<int>::max();
    //    puts("here23");
    }
    curDists[srcP->id] = 0;
    slSrc = slNodes[srcP->id];
}

void SaltBase::Finalize(const Net& net, Tree& tree) {
    for (auto n : slNodes)
        if (n && n->parent)
        {
            // puts("d5lt");
            slNodes[n->parent->id]->children.push_back(n);
            // puts("tl3t");
        }
    // puts("eh");
    tree.source = slSrc;
    tree.net = &net;
}

void SaltBuilder::Run(const Net & net, Tree& tree, double eps, int refineLevel) {
    // SMT
    Tree smt;
    FluteBuilder fluteB;
    fluteB.Run(net, smt);
    puts("here1");
    // Refine SMT
    if (refineLevel >= 1) {
        Refine::Flip(smt);
        Refine::UShift(smt);
    }

    // Init
    Init(smt, net.source());
    puts("here2");

    // DFS
    DFS(smt.source, slSrc, eps);
    puts("here5");
    Finalize(net, tree);
    puts("here6");

    tree.RemoveTopoRedundantSteiner();
    // Connect breakpoints to source by RSA
    salt::RsaBuilder rsaB;
    rsaB.ReplaceRootChildren(tree);
    puts("here3");

    // Refine SALT
    if (refineLevel >= 1) {
    puts("here7");
        Refine::CancelIntersect(tree);
        Refine::Flip(tree);
        Refine::UShift(tree);
    puts("here8");
        if (refineLevel >= 2) {
    puts("here9");
            Refine::Substitute(tree, eps, refineLevel == 3);
        }
    }
    puts("here4");
}

bool SaltBuilder::Relax(const shared_ptr<TreeNode>& u, const shared_ptr<TreeNode>& v) {
    DTYPE newDist = curDists[u->id] + Dist(u->loc, v->loc);
    if (curDists[v->id] > newDist) {
        curDists[v->id] = newDist;
        v->parent = u;
        return true;
    } else if (curDists[v->id] == newDist && Dist(u->loc, v->loc) < v->WireToParent()) {
        v->parent = u;
        return true;
    } else
        return false;
}

void SaltBuilder::DFS(const shared_ptr<TreeNode>& smtNode, const shared_ptr<TreeNode>& slNode, double eps) {
    if (smtNode->pin && curDists[slNode->id] > (1 + eps) * shortestDists[slNode->id]) {
        slNode->parent = slSrc;
        curDists[slNode->id] = shortestDists[slNode->id];
    }
    for (auto c : smtNode->children) {
        Relax(slNode, slNodes[c->id]);
        DFS(c, slNodes[c->id], eps);
        Relax(slNodes[c->id], slNode);
    }
}

}  // namespace salt