#include "Itemcarrito.h"

Itemcarrito::Itemcarrito() {
    cantidad = 0;
}

Itemcarrito::Itemcarrito(producto _prod, int _cantidad) {
    prod = _prod;
    cantidad = _cantidad;
}
    
void Itemcarrito::mostrarItem() {
    cout<<"  "<<prod.nombre<<" | Cantidad: "<<cantidad<<" | Precio unitario: $"<<prod.precio<<" | Subtotal: $"<<prod.precio * cantidad<<endl;
}