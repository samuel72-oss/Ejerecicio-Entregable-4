#include "producto.h"

producto::producto() {
    nombre = "";
    precio = 0.0;
    stock = 0;
}

producto::producto(string _nombre, float _precio, int _stock) {
    nombre = _nombre;
    precio = _precio;
    stock = _stock;
}
    
void producto::mostrar() {
    cout << "Producto: "<< nombre<<" | Precio: $"<< precio<<" | Stock: "<< stock <<" unidades"<< endl;    
}