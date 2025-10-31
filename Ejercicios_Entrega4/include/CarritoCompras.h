#ifndef CARRITOCOMPRAS_H
#define CARRITOCOMPRAS_H

#include <iostream>
#include "Itemcarrito.h"
#include <string>
using namespace std;

class CarritoCompras {
    public:
        Itemcarrito items[100];
        int totalArticulos;
        int numItems;
        
        CarritoCompras(Itemcarrito,int,int);
        void agregar(producto p, int cantidad);
        void eliminar();
        void factura();
};

#endif