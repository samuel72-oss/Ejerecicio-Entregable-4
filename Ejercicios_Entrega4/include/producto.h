#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>
using namespace std;

class producto {
    public:
        string nombre;
        float precio;
        int stock;
    
        producto(string,float,int);
        void mostrar();
};

#endif