#include<graphics.h>
#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED

class Line:public Shape{
public:
    Line(){
    }
    Line(int x,int y,int z,int w){
        Shape::setTwoPoints(x,y,z,w);
    }
    void draw(){
//            int gd  = DETECT , gm;
//        initgraph(&gd,&gm,(char*)"");
        line(Shape::getx1(),Shape::gety1(),Shape::getx2(),Shape::gety2());
//	    getch();
//        closegraph();
    }
};


#endif // LINE_H_INCLUDED
