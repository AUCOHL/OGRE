#include "net.h"

#include "LefDefParser.h"

#include <boost/functional/hash.hpp>
#include <fstream>
#include <unordered_set>
#include <map>

namespace salt {

void Net::RanInit(int i, int numPin, DTYPE width, DTYPE height) {
    pins.clear();
    id = i;
    name = "random_pin" + to_string(numPin) + "_id" + to_string(i);
    int k = 0;
    unordered_set<pair<DTYPE, DTYPE>, boost::hash<pair<DTYPE, DTYPE>>> exist;
    int trial = 0;
    while (exist.size() < numPin) {
        DTYPE x = rand() % (int)width, y = rand() % (int)height;  // TODO: better random generator
        if (exist.find({x, y}) == exist.end()) {
            pins.push_back(make_shared<Pin>(x, y, k++));
            exist.insert({x, y});
        }
        if (trial++ > numPin * 2) {
            break;
            log() << "randomly try 2 * #pins times. give up." << endl;
        }
    }
    // log() << "specify " << numPin << ", get " << k << endl;
}
int layerStringtoNumber(const string layerName)
{
    string result;
    for (int i = 5; i < layerName.length(); ++i)
    	result += layerName[i];
    return stoi(result) - 1;
}
bool Net::read_net(const def::NetPtr &parser_net, int id_, unordered_map<int, pair<int,int>> &idMap) {
    id = id_;
    name = parser_net->name_;
    withCap = false;

    unordered_map<pair<int, int>, int, boost::hash<pair<int, int>>> pin_mp; // from x, y to id

    int numPin = parser_net->connections_.size();
    int dec = 0;
    int tree_id = 0;
    // unordered_set<pair<int, int>> pin_set;
    pair<int, int> p;
    int layerNo;
    for(int id = 0; id < numPin; ++id){
        if (parser_net->connections_[id]->lef_pin_ != nullptr)
        {
            p = ldp.get_bounding_GCell(parser_net->connections_[id]->lx_, parser_net->connections_[id]->ly_);
            layerNo = layerStringtoNumber(parser_net->connections_[id]->lef_pin_->ports_[0]->layer_name_);
        }
        else
        {
            p = ldp.get_bounding_GCell(parser_net->connections_[id]->pin_->x_, parser_net->connections_[id]->pin_->y_);
            layerNo = layerStringtoNumber(parser_net->connections_[id]->pin_->layer_);
        }
        if (pin_mp.find(p) != pin_mp.end())
        {
            dec++;
            continue;
        }
        else{
            idMap[tree_id] = {id, layerNo};
            tree_id++;
        }
        pin_mp[p] = id;
    }
    numPin -= dec;
    if (numPin <= 1) return false;
    assert(tree_id == numPin);
    pins.resize(numPin);
    int x, y, ind = 0;
    double c = 0.0;
    auto it = pin_mp.begin();
     for (auto &pin : pins) {
        // // DONE: CHANGE THIS TO BE GCELL COORD
        // x = parser_net->connections_[i]->lx_;
        // y = parser_net->connections_[i]->ly_;
        auto elm = *it;
        p = elm.first;
        x = p.first;
        y = p.second;
       // printf("x: %d, y: %d, ind: %d\n", x, y, ind);
        pin = make_shared<Pin>(x, y, ind, c);
        ind++;
        advance(it, 1);
    }
    return true;
    // pins.resize(numPin);
    // printf("%d\n", elm.second);
}

// TODO: use catch to handle istream error
bool Net::Read(istream& is) {
    // header
    string buf, option;
    int numPin = 0;
    while (is >> buf && buf != "Net")
        ;
    if (buf != "Net") return false;
    getline(is, buf);
    istringstream iss(buf);
    iss >> id >> name >> numPin >> option;
    assert(numPin > 0);
    withCap = (option == "-cap");

    // pins
    int i;
    DTYPE x, y;
    double c = 0.0;
    pins.resize(numPin);
    for (auto& pin : pins) {
        is >> i >> x >> y;
        if (withCap) is >> c;
        pin = make_shared<Pin>(x, y, i, c);
    }

    return true;
}

void Net::Read(const string& fileName) {
    ifstream is(fileName);
    if (is.fail()) {
        cout << "ERROR: Cannot open file " << fileName << endl;
        exit(1);
    }
    Read(is);
}

string Net::GetHeader() const {
    string header = to_string(id) + " " + name + " " + to_string(pins.size());
    // string header = name + " " + to_string(pins.size());
    if (withCap) header += " -cap";
    return header;
}

void Net::Write(ostream& os) const {
    // header
    os << "Net " << GetHeader() << endl;

    // pins
    for (const auto& pin : pins) {
        os << pin->id << " " << pin->loc.x << " " << pin->loc.y;
        if (withCap) os << " " << pin->cap;
        os << endl;
    }
}

void Net::Write(const string& prefix, bool withNetInfo) const {
    ofstream os(prefix + (withNetInfo ? ("_" + name) : "") + ".net");
    Write(os);
}

}  // namespace salt