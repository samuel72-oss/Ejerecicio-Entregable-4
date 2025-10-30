#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>
using namespace std;

class producto{
    private:
        string nombre;
        string precio;
        int stock;
    public:
        producto(string,string,int)
        void mostrar();
};

#endif