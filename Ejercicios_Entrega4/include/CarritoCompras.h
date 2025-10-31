#ifndef CARRITOCOMPRAS_H
#define CARRITOCOMPRAS_H

#include <iostream>
#include <string>
using namespace std;

class CarritoCompras {
    public:
        Itemcarrito items[100];
        int totalArticulos;
        int numItems;
        
        CarritoCompras(Itemcarrito,int,int);
        void agregar();
        void eliminar();
        void factura();
};

#endif