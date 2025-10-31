#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>
using namespace std;

class usuario {
    public:
        string nombre;
        string apellido;
        int cedula;
        CarritoCompras historialCompras[50];
        int numCompras;

        usuario(string,string,int,CarritoCompras,int);
        void historial();
};

#endif