#ifndef USUARIO_H   
#define USUARIO_H

#include <iostream>
#include <string>
#include "ItemCarrito.h"
using namespace std;

class usuario : public ItemCarrito{
    private:
        string apellido;
        int cedula;
    public:
        void historial();
}

#endif