#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>
#include "CarritoCompras.h"
using namespace std;

class usuario {
    public:
        string nombre;
        string apellido;
        int cedula;
        CarritoCompras historialCompras[50];
        int numCompras;

        usuario(string,string,int,CarritoCompras,int);
        usuario(string, string, int);
        void historial();
};

#endif