#include<graphics.h>
#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
class Rctangle:public Shape{

public:
    Rctangle(){}
    Rctangle(int x, int y,int z,int w){
        Shape::setTwoPoints(x,y,z,w);
    }
    void draw(){
        rectangle(Shape::getx1(),Shape::gety1(),Shape::getx2(),Shape::gety2());
    }
};

#endif // RECTANGLE_H_INCLUDED
