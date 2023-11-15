#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
#include<graphics.h>
class Circle:public Shape{
    int r;
public:
    Circle(){}
    Circle(int x,int y){
        Shape::setPoint1(x,y);
    }
    void setr(int _r){
        r=_r;
    }
    int getr(){
        return r;
    }
    void draw(){
        cout<<getx1()<<" "<<gety1()<<" "<<getr();
        circle(getx1(),gety1(),getr());
    }
};

#endif // CIRCLE_H_INCLUDED
