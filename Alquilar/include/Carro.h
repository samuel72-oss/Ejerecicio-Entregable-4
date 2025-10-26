#ifndef CARRO_H
#define CARRO_H
#include <string>
#include <iostream>
#include "Vehiculo.h"
using namespace std;

class carro : public vehiculo{
    private:
        int pasajeros;
    public:
        carro(string,string,string,int);
        virtual void alquilar();
};

#endif