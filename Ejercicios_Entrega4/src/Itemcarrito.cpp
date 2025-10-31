#include "Itemcarrito.h"

Itemcarrito::Itemcarrito(producto _prod, int _cantidad) {
    prod = _prod;
    cantidad = _cantidad;
}
    
void mostrarItem() {
    cout<<"  "<<prod.nombre<<" | Cantidad: "<<cantidad<<" | Precio unitario: $"<<prod.precio<<" | Subtotal: $"<<prod.precio * cantidad<<endl;
}