#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
#include <iostream>
using namespace std;

class vehiculo{
    protected:
        string marca;
        string modelo;
        string placa;
    public:
        vehiculo(string,string,string);
        void info();
};

#endif