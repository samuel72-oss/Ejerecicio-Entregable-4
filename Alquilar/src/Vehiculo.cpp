#include "Vehiculo.h"

vehiculo::vehiculo(string _marca,string _modelo,string _placa){
    marca=_marca;
    modelo=_modelo;
    placa=_placa;
}

void vehiculo::info(){
    cout<<"El vehiculo es un "<<marca<<" de modelo "<<modelo<<" con la placa "<<placa<<endl;
}