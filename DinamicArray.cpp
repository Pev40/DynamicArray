#include <iostream>
#include "DinamicArray.h"

DinamicArray::DinamicArray(){
    size=0;
    arr=new Point[0];
}

DinamicArray::DinamicArray(const Point arr[],int size){
    this->size=size;
    this->arr=new Point[size];

    for (int i = 0; i < size; i++)
    {
        this->arr[i]=arr[i];
    }
    
}

DinamicArray::DinamicArray(const DinamicArray &o){
    this->size=o.size;
    this->arr = new Point[o.size];

    for (int i = 0; i < size; i++)
    {
        this->arr[i]=o.arr[i];
    }
}

int DinamicArray::getSize(){
    return this->size;
}

void DinamicArray::push_back(Point elem){
    this->size = this->getSize()+1;
    Point *arrayNuevo = new Point[this->getSize()];
    for (int i = 0; i < this->getSize(); i++)
    {
        arrayNuevo[i]=this->arr[i];
    }
    arrayNuevo[this->getSize()-1]=elem;
    delete []this->arr;
    this->arr = arrayNuevo;
    return;
}

void DinamicArray::remove(int pos){
    if(pos >= size || pos<0){
        std::cout<<std::endl<<"Esa Posicion NO EXISTE"<<std::endl;
        return;
    }
    if(pos == size){
        Point *arrayNuevo = new Point[size-1];
        for (int i = 0; i < pos-1; i++)
        {
            arrayNuevo[i]= this->arr[i];
        }
        size -=1;
        delete []arr;
        arr = arrayNuevo;
        return;
    }
    else{
        Point *arrayNuevo = new Point[size-1];
        for (int i = 0; i < pos; i++)
        {
            arrayNuevo[i]= this->arr[i];
        }
        for (int i = pos+1; i < size; i++)
        {
            arrayNuevo[i-1]=this->arr[i];
        }
        size -=1;
        delete []this->arr;
        arr = arrayNuevo;
        return;
    }

}   

void DinamicArray::insert(Point elem, int pos){
    if (pos >= size)
    {   
        if (pos > size)
        {
            std::cout<<std::endl<<"Caso1.1"<<std::endl;
            Point *newArray = new Point[pos+1];
            Point n(0,0);
            for (int i = 0; i < size; i++)
            {
                newArray[i] = this->arr[i];
            }
            for (int i = size; i < pos-1; i++)
            {
                newArray[i] = n;
            }
            newArray[pos-1] = elem; 
            delete []arr;
            arr = newArray;
            size = pos;
        }

        else
        {
            std::cout<<std::endl<<"Caso1.2"<<std::endl;
            Point *newArray = new Point[size+1];
            Point n(0,0);
            for (int i = 0; i < size; i++)
            {
                newArray[i] = this->arr[i];
            }
            newArray[pos] = elem; 
            delete []arr;
            arr = newArray;
            size +=1;
        }
        
        

        return;    
    }
    else{
        std::cout<<std::endl<<"Caso2"<<std::endl;
        Point *newArray = new Point[size+1];
        for (int i = 0; i < pos; i++)
        {
            newArray[i] = this->arr[i];
        }
        newArray[pos] = elem;

        for (int i = pos; i < size; i++)
        {
            newArray[i+1] = this->arr[i];
        }
        size = size+1;
        delete[] arr;
        arr = newArray;
        return;
    } 
    return ;
}

void DinamicArray::imprimir(){
    for (int i = 0; i < size; i++)
    {
       arr[i].ver();
    }
}

DinamicArray::~DinamicArray(){
    delete []arr;
}