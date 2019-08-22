#ifndef COORDINATES_H
#define COORDINATES_H

#include <vector>
#include <array>
#include <string>
class CoordinateTwoDim 
{
	public:
		int x;
		int y;
	public:
		CoordinateTwoDim(int _x = 0, int _y = 0) : x{_x}, y{_y} {};
		CoordinateTwoDim(const CoordinateTwoDim& other) : x{other.x}, y{other.y} {};

    bool operator==(const CoordinateTwoDim& other) const {
        return (x == other.x && y == other.y);
    }
    bool operator!=(const CoordinateTwoDim& other) const {
        return (x != other.x || y != other.y);
    }
    void set(int ix, int iy) {
        x = ix;
        y = iy;
    }

    void set(const CoordinateTwoDim& other) {
        x = other.x;
        y = other.y;
    }

    CoordinateTwoDim operator +(const CoordinateTwoDim& a) {
        return CoordinateTwoDim(x + a.x, y + a.y);
    }

    bool isAligned(const CoordinateTwoDim& c) const {
        return x == c.x || y == c.y;
    }

    static const std::array<CoordinateTwoDim, 4> dir_array() {
        static std::array<CoordinateTwoDim, 4> arr { { { 1, 0 }, { 0, 1 }, { -1, 0 }, { 0, -1 } } };
        return arr; ////FRONT,BACK,LEFT,RIGHT; //FRONT,BACK,LEFT,RIGHT
    }

    std::string toString() const {
        return std::to_string(x) + "," + std::to_string(y);
    }		
};

class CoordinateThreeDim 
{
	public:
		int x;
		int y;
		int z;
	public:
		CoordinateThreeDim(int _z = 0, int _x = 0, int _y = 0):
			z(_z), x(_x), y(_y) {};
		CoordinateThreeDim(const CoordinateTwoDim& other, int _z = 0) :
			z(_z), x(other.x), y(other.y) {};
	bool operator==(const CoordinateThreeDim& other) const {
        return (x == other.x && y == other.y && z == other.z);
    }
    std::string toString() const {
        return "(" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + ")";
    }
};
typedef CoordinateThreeDim Pin;

// information for a two pin net
class TwoPinTwoDim
{
    public:
    std::string net_id;
	int done;

	public: 
	TwoPinTwoDim() : net_id(""), done(-1) {};
	CoordinateTwoDim pin1;
	CoordinateTwoDim pin2;
	std::vector<CoordinateTwoDim> path;

	std::string toString() const {
		std::string s = "pin1: " + pin1.toString();
        s += " pin2: " + pin2.toString();
        s += " path: [";
        for (const CoordinateTwoDim& c : path) {
            s += c.toString() + " ";
        }
        s += "] Net Name: " + net_id;
        s += " done: " + std::to_string(done);
        return s;

    }
    bool operator < (const TwoPinTwoDim& other) const
    {
        return false;
    }
    int getEuclideanDistance()
    {
        return abs(pin1.x - pin2.x) + abs(pin1.y - pin2.y);
    }
};


#endif 
