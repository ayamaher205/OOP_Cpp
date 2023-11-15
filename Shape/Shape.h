#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED
#include"Point.h"
#include<string.h>

class Shape{

    string color;
    Point p1,p2;
public:
    void setColor(string x){
        color = x;
    }
    void setPoint1(int _x,int _y){
        p1.setxy(_x,_y);
    }
    void setPoint2(int _x,int _y){
        p2.setxy(_x,_y);
    }
    void setTwoPoints(int x1,int y1,int x2,int y2){
        p1.setxy(x1,y1);
        p2.setxy(x2,y2);
    }
    int getx1(void){
        return p1.getx();
    }
    string getColor(void){
        return color;
    }
    int gety1(void){
        return p1.gety();
    }
    int getx2(void){
        return p2.getx();
    }
    int gety2(void){
        return p2.gety();
    }
    void draw(){}
};


#endif // SHAPE_H_INCLUDED
