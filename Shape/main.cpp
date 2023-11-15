#include <iostream>
#include"Shape.h"
#include"Line.h"
#include"Circle.h"
#include"Rectangle.h"
using namespace std;

int main()
{
    int n,choice,x1,y1,x2,y2,color;
    cout<<"Enter number of shapes you want to draw\n";
    cin>>n;
    cout<<"Enter color of shapes you want to draw But note that\nBLACK         0\nBLUE          1\nGREEN         2\nCYAN          3\nRED           4\nMAGENTA       5\nBROWN         6\nLIGHTGRAY     7\nDARKGRAY      8\nLIGHTBLUE     9\nLIGHTGREEN    10\nLIGHTCYAN     11\nLIGHTRED      12\nLIGHTMAGENTA  13\nYELLOW        14\nWHITE         15\n";
    cin>>color;
    int type[n];
    Circle *circles[n];
    Rctangle* rectangles[n];
    Line* lines[n];
    for(int i = 0;i<n;i++){
        cout<<"To draw Line press 1 ,To draw Circle press 2, To draw Rectangle press 3:\n";
        cin>>choice;
        type[i] = choice;
        switch(choice){
        case 1:
            {
                cout<<"Enter two points\n";
                cin>>x1>>y1>>x2>>y2;
                lines[i] = new Line();
                lines[i]->setTwoPoints(x1,y1,x2,y2);
                break;
        }
        case 2:
           {
            int r;
            cout<<"Enter radius and one point\n";
            cin>>x1>>y1>>r;
            circles[i] = new Circle();
            circles[i]->setPoint1(x1,y1);
            circles[i]->setr(r);
            break;
        }
        case 3:{
            cout<<"Enter two points\n";
            cin>>x1>>y1>>x2>>y2;
            rectangles[i] = new Rctangle();
            rectangles[i]->setTwoPoints(x1,y1,x2,y2);
            break;
            }
        }
    }

    int gd  = DETECT , gm;
    initgraph(&gd,&gm,(char*)"");
    setcolor(color);
    for(int i = 0;i<n;i++){
        switch(type[i]){
        case 1:
            lines[i]->draw();
            break;
        case 2:
            circles[i]->draw();
            break;
        case 3:
            rectangles[i]->draw();
            break;
            }
        }
    getch();
    closegraph();
    for (int i = 0; i < n; i++) {
        delete lines[i];
        delete circles[i];
        delete rectangles[i];
    }
    delete[] lines;
    delete[] circles;
    delete[] rectangles;
    return 0;
}
