#include<iostream>
using namespace std;

#include "Point.h"

int main(){

	Point p0 = Point();
	Point p1(21.34);
	Point p2(2.1,4.3);
	Point p3(p1);
	Point p4(1,1);

	
	cout<<"p0 = "<<p0.toString()<<endl;
	cout<<"p1 = "<<p1.toString()<<endl;	
	cout<<"p2 = "<<p2.toString()<<endl;
	cout<<"p3 = "<<p3.toString()<<endl;
	cout<<"p4 = "<<p4.toString()<<endl;



	return 0;
}
