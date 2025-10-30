#include "CarritoCompras.h"

CarritoCompras::CarritoCompras(string _nombre,string _precio,int _stock,int _total) : producto(_nombre,_precio,_stock){
    total=_total;
}