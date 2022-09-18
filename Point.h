#ifndef __POINT_H__
#define __POINT_H__
#include <iostream>
class Point
{
private:
    int x;
    int y;
public:
    Point(int _x =0,int _y =0): x(_x),y(_y){};

    void setX(int _x){
        x = _x;
    }

    void setY(int _y){
        y = _y;
    }

    int getX()const{
        return x;
    }
    int getY()const{
        return y;
    }

    void ver(){
        std::cout<<"("<<getX()<<" , "<<getY()<<")"<<" -> ";
    }
};

#endif