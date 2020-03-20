# Global Router Built for ICCAD-Contest 2019

This Global Router was built for ICCAD 2019 contest. VLSI circuit layout is when the physical circuit is figured out from two files: Library Exchange Format (LEF) and Design Exchange Format (DEF). Due to the size of the problem, and the increasing complexity, the problem is cut into phases, and in the global routing phase, the grid is created from a definition in the DEF file called the GCells. And then routing takes place giving a guide to the detailed router to flood in it; hence, decreasing the overall complexity.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

Make sure to first have G++ Compiler and Boost.

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

## Authors

* **Ali El-Said** [palindali](https://github.com/palindali)
* **Fady Mohamed** [fadymoh](https://github.com/fadymoh)
* **Habiba Gamal** [habibagamal](https://github.com/habibagamal)

## Acknowledgments

* **[Prof. Mohamed Shalan](https://github.com/shalan)** was our advisor for the contest.
* Lef Def parser's author is [jinwookjungs](https://github.com/jinwookjungs)
* Fast Implementation of A star algorithm in 2D [justinhj](https://github.com/justinhj/astar-algorithm-cpp)
* FLUTE: Fast Lookup Table Based Technique for RSMT Construction and Wirelength Estimation (http://home.eng.iastate.edu/~cnchu/flute.html)
* SALT: Steiner Shallow-Light Tree for VLSI Routing. (https://github.com/chengengjie/salt)


