#include "Producto.h"

producto::producto(string _nombre,string _precio,int _stock){
    nombre=_nombre;
    precio=_precio;
    stock=_stock;
}

void producto::mostrar(){
    cout<<"El producto "<<producto<<" con un valor de $"<<precio<<" Quedan "<<stock<<" productos en bodega"<<endl;
}