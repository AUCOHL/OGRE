# Global Router Built for ICCAD-Contest 2019

This Global Router was built for ICCAD 2019 contest. VLSI circuit layout is when the physical circuit is figured out from two files: Library Exchange Format (LEF) and Design Exchange Format (DEF). Due to the size of the problem, and the increasing complexity, the problem is cut into phases, and in the global routing phase, the grid is created from a definition in the DEF file called the GCells. And then routing takes place giving a guide to the detailed router to flood in it; hence, decreasing the overall complexity.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

What things you need to do to get the Lef Def Parser working
```shell
git clone https://github.com/fadymoh/Global-Router-ICCAD-Contest
cd Global-Router-ICCAD-Contest
cd si2
cd def
make clean
make install
cp /lib/libdef.a ../../GlobalRouter/lib/linux
cd ../lef
make clean
make install
cp /lib/liblef.a ../../GlobalRouter/lib/linux
```

### Installing

What you need to do to get the GlobalRouter Working.
First navigate to the Global Router directory.

```shell
make clean
make depend
make all
```

## Running the tests

```shell
./global_router -lef <lef file path> -def <def file path> -output <guide file path> -thread <number of threads> 
```

## Getting Started with OGRE

The following example is from (main.cpp) shows the first part of the main function. At first we specify the lef and def files. and to output we output enter the argument first starting with -output and specify the file you want to output in, you can also specify the number of threads. After we initialize the threads and Parse the def and lef files we stard bulding  a global grid using ldp which is an instance of a lefdef parser [LefDefParser.cpp](./GlobalRouter/lefdef/LefDefParser.cpp), we build a 3D g cell grid and then we set the z , x, and y. ````unordered_map<string, def::NetPtr> nets;```` will be used to contain all the nets and then will be put in a priority queue. After  that we place the obstructions  within the grid and we start routing.
```cpp
auto &ap = ArgParser::get();

ap.initialize(argc, argv);
auto filename_lef = ap.get_argument("-lef");
auto filename_def = ap.get_argument("-def");
auto outfile_guide = ap.get_argument("-output");
auto thread_count = ap.get_argument("-thread");
out.open(outfile_guide);
int threadsCounter = stoi(thread_count);
//
// ─── INITIALIZE THE THREADS ─────────────────────────────────────────────────────
//

if (filename_lef == "" or filename_def == "" or outfile_guide == "" or thread_count == "")
{
show_usage();
return -1;
}
show_banner();
show_cmd_args();
//
// ─── PARSE DEF AND LEF FILES ────────────────────────────────────────────────────
//
ldp.read_lef(filename_lef);
ldp.read_def(filename_def);

//
// ─── BUILD GLOBAL GRID ──────────────────────────────────────────────────────────
//
gcellGrid = ldp.build_Gcell_grid(layerMap);
zDimension = gcellGrid.size();
xDimension = gcellGrid[0].size();
yDimension = gcellGrid[0][0].size();

unordered_map<string, def::NetPtr> nets;
nets = ldp.def_.get_net_umap();

pq xx = orderNets(nets);
queue<pair<int, string>> ordered_nets;
for (int i = 0; i < xx.size(); i++)
{
pair<int, string> b = xx.top();
ordered_nets.push(b);
xx.pop();
}


int netCounter = 0;
for (auto net : nets)
{
allNetsPath[net.first] = vector<triplet>();
}
putObstructions();
puts("Starting to Route!");
printf("nets size: %d\n", (int)ordered_nets.size());
int net_id = 0;
int bufferId = 0;
//
```
## Obstruction Placement
The following example is from main.cpp from a function called putObstructions() , at first we create an unordered map compMap inside of it is the obstructions. Then using the compMap she loops on the cells, and each cell has its own  obstructions. Then according to the orientation of the obstruction in the def file, we place the obstructions. The orientations in the def file are North, Flipped North, South , Flipped South..
````
auto &xldp = my_lefdef::LefDefParser::get_instance();
unordered_map<string, def::ComponentPtr> compMap = xldp.def_.get_component_umap();
int defDBU = xldp.def_.get_dbu();
int lefDBU = xldp.lef_.get_dbu();

int i = 0;
for (auto &comp : compMap)
{
int x0 = comp.second->x_;
int y0 = comp.second->y_;
int W = comp.second->lef_macro_->size_x_ * defDBU;
int H = comp.second->lef_macro_->size_y_ * defDBU;
string orientation = comp.second->orient_str_;

for (auto &obs : comp.second->lef_macro_->obsts)
{
// cout <<comp.second-> lef_macro_->name_;

//using units of DEF
int x = obs.xl * defDBU;
int y = obs.yl * defDBU;
int ux = obs.xh * defDBU;
int uy = obs.yh * defDBU;

int w = ux - x;
int h = uy - y;

int xl, yl, xh, yh;

cout << "putObstructions(1)" << endl;
//getting the coordinates of the obstruction after placement
if (orientation == "N")
{
xl = x0 + x;
yl = y0 + y;
xh = xl + w;
yh = yl + h;
}
else if (orientation == "FN")
{
xl = x0 + W - x - w;
yl = y0 + y;
xh = xl + w;
yh = yl + h;
}
else if (orientation == "S")
{
xl = x0 + W - x - w;
yl = y0 + H - y - h;
xh = xl + w;
yh = yl + h;
}
else if (orientation == "FS")
{
xl = x0 + x;
yl = y0 + H - y - h;
xh = xl + w;
yh = yl + h;
}
else if (orientation == "W")
{
xl = x0 + H - y - h;
yl = y0 + x;
xh = xl + h;
yh = yl + w;
}
else if (orientation == "FW")
{
xl = x0 + y;
yl = y0 + x;
xh = xl + h;
yh = yl + w;
}
else if (orientation == "E")
{
xl = x0 + y;
yl = y0 + W - x - w;
xh = xl + h;
yh = yl + w;
}
else if (orientation == "FE")
{
xl = x0 + H - y - h;
yl = y0 + W - x - w;
xh = xl + h;
yh = yl + w;
}
else
{
xl = x0 + x;
yl = y0 + y;
xh = xl + w;
yh = yl + h;
}
````
After that we try to find every obstruction belongs to which g-cell, and based on where the obstructions are we decide the utilization factor of the cell.  Utilization is a measure of how congested the gcell is , therefore is the utilization rate is high we need more vias then wires, therefore we use a quadratic equation to calculate the via and wire capacitance based on change in the utilization, the higher the utilization the higher the via capacity and the lower the wire capacity.
````
double utilization = (obstructionChangeInX * obstructionChangeInY) / (gcellChangeInX * gcellChangeInY);
int capacity = gcellGrid[k - 1][i][j].capacity * (1 - utilization);
gcellGrid[k - 1][i][j].setCapacity(capacity);
gcellGrid[k-1][i][j].setWireCap(capacity * 1- ((-2*pow(utilization,utilization))+2*utilization+0.25));
gcellGrid[k-1][i][j].setViaCap(capacity * ((-2*pow(utilization,utilization))+2*utilization+0.25));
cout << "DONE WITH putObstructions()" << endl;
````


## Authors

* **Ali El-Said** [palindali](https://github.com/palindali)
* **Fady Mohamed** [fadymoh](https://github.com/fadymoh)
* **Habiba Gamal** [habibagamal](https://github.com/habibagamal)
* **Aya Farag** [ayashaker98](https://github.com/ayashaker98)
* **Noha  Mohamed** [noha158](https://github.com/noha158)
* **Ahmed Fahmy** [awael](https://github.com/awael)
* **Ahmed Abouzaid** [AhmedAbouzaid1](https://github.com/AhmedAbouzaid1)
## Acknowledgments

* Doctor Mohamed Shalan was our advisor for the contest.
* Lef Def parser's author is [jinwookjungs](https://github.com/jinwookjungs)
* Fast Implementation of A star algorithm in 2D [justinhj](https://github.com/justinhj/astar-algorithm-cpp)
* FLUTE: Fast Lookup Table Based Technique for RSMT Construction and Wirelength Estimation (http://home.eng.iastate.edu/~cnchu/flute.html)
* SALT: Steiner Shallow-Light Tree for VLSI Routing. (https://github.com/chengengjie/salt)

