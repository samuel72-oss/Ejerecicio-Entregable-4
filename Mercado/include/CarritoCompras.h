#ifndef CARRITOCOMPRAS_H
#define CARRITOCOMPRAS_H

#include <iostream>
#include <string>
#include "Producto.h"
#include "ItemCarrito.h"
using namespace std;

class CarritoCompras : public ItemCarrito{
    private:
        int total;
        int articulo;
    public:
        CarritoCompras();
        void agregar();
        void eliminar();
        void factura();
};

#endif