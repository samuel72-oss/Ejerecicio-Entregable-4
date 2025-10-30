#include "ItemCarrito.h"

Itemcarrito::Itemcarrito(string _nombre,string _precio,int _stock, int _cantidad) : producto(_nombre,_precio,_stock){
    cantidad=_cantidad;
}

void Itemcarrito::carrito(){
    cout<<"\t----CARRITO COMPRAS----\n"<<endl;
    cout<<"Llevas "<<cantidad<<" de "<<producto<<"\n"<<endl;
    cout<<"El valor de tu carrito es: $"<<precio*cantidad<<endl;
}