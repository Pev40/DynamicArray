#include "DinamicArray.h"
#include <iostream>

using namespace std;

int main(){
    DinamicArray p;

    //Al fondo
    Point nuevo(14,15);
    p.push_back(nuevo);

    //Mayor
    Point n2(1,2);
    p.insert(n2,3);
    cout<<"Dimension: "<<p.getSize()<<endl;
    p.imprimir();

    //Menor
    Point n3(12,23);
    p.insert(n3,1);
    cout<<"Dimension: "<<p.getSize()<<endl;
    p.imprimir();

    //Igual
    Point n4(142,234);
    p.insert(n4,4);
    cout<<"Dimension: "<<p.getSize()<<endl;
    p.imprimir();
    //Eliminar Posicion Cualquiera
    p.remove(2);
    cout<<endl<<"Dimension: "<<p.getSize()<<endl;
    p.imprimir();
    //Eliminar Posicion 0
    p.remove(0);
    cout<<endl<<"Dimension: "<<p.getSize()<<endl;
    p.imprimir();
    //Eliminar Posicion Excedente
    p.remove(8);
    cout<<endl<<"Dimension: "<<p.getSize()<<endl;
    p.imprimir();

}