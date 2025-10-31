#include "producto.h"

producto::producto(string _nombre, float _precio, int _stock) {
    nombre = _nombre;
    precio = _precio;
    stock = _stock;
}
    
void mostrar() {
    cout << "Producto: "<< nombre<<" | Precio: $"<< precio<<" | Stock: "<< stock <<" unidades"<< endl;    
}