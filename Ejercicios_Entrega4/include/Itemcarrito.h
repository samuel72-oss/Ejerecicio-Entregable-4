#ifndef ITEMCARRITO_H
#define ITEMCARRITO_H

#include <iostream>
#include "producto.h"
#include <string>
using namespace std;

class Itemcarrito {
    public:
        producto prod;
        int cantidad;
    
        Itemcarrito(producto,int);
        void mostrarItem();
};

#endif