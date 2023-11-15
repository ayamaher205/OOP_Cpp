#include<iostream>
using namespace std;
#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point{
private:
	int x;
	int y;
public:
    //Point(){}
	Point(int _x=0 , int _y=0) {
		x = _x;
		y = _y;
	}
	void setx(int _x) {
		x = _x;
	}
	void sety(int _y) {
		y = _y;
	}
	void setxy(int _x,int _y) {
		x = _x;
		y = _y;
	}
	int getx() {
		return x;
	}
	int gety() {
		return y;
	}
	friend istream& operator>>(istream& in, Point& p);
};  //end class
istream& operator>>(istream& in, Point& p){
        in>>p.x>>p.y;
        return in;
	}

#endif // POINT_H_INCLUDED
