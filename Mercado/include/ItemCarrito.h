#ifndef ITEMCARRITO_H
#define ITEMCARRITO_H

#include <iostream>
#include <string>
#include "Producto.h"
using namespace std;

class Itemcarrito : public producto{
    private:
        int cantidad;
    public:
        Itemcarrito();
        void carrito();
};

#endif