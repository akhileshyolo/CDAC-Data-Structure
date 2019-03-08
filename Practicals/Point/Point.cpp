#include<iostream>
#include<sstream>
using namespace std;
#include "Point.h"

Point::Point(double x, double y){
	_x = x, _y = y;
}

// Point::Point(const Point& p){
Point::Point(const Point& p){
_x = p._x, _y = p._y;
}

Point::~Point(){}

Point& Point::operator=(const Point& p){
	_x = p._x;
	_y = p._y;
	return *this;
}

double Point::getX() const {return _x; }
double Point::getY() const {return _y; }

string Point::toString() const {
	ostringstream output;
	output<<"("<<_x<<","<<_y<<")";
	return output.str();
}
