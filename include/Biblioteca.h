#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <string>
#include <iostream>
#include "Libro.h"
using namespace std;

class Biblioteca {
    private: 
        string titulo[100];
        string autor[100];
        string isbn[100];
        bool disponible[100];
        int cantidad=0;
    public:
        Biblioteca();
        void agregar(string, string, string, bool);
        void eliminar(string);
        void mostrar();

};

#endif