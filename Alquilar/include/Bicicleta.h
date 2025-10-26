#ifndef BICICLETA_H
#define BICICLETA_H
#include <string>
#include <iostream>
#include "Vehiculo.h"
using namespace std;

class bicicleta : public vehiculo{
    private:
        int pasajero;
    public:
        bicicleta(string,string,string,int);
        void alquilar();
};

#endif