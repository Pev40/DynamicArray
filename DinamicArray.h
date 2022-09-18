#ifndef __DINAMICARRAY_H__
#define __DINAMICARRAY_H__

#include "Point.h"
class DinamicArray
{
private:
    Point *arr;
    int size;
public:
    DinamicArray();
    DinamicArray(const Point arr[],int size);
    DinamicArray(const DinamicArray &o);

    void push_back(Point elem);

    void insert(Point elem, int pos);
    void remove(int pos);

    int getSize();

    void imprimir();
    ~DinamicArray();
};

#endif
