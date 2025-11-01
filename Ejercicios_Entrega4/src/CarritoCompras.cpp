#include "CarritoCompras.h"

CarritoCompras::CarritoCompras() {
        totalArticulos = 0;
        numItems = 0;
}

CarritoCompras::CarritoCompras(Itemcarrito item, int n, int total) {
    items[0] = item;
    numItems = n;
    totalArticulos = total;
}
    
void CarritoCompras::agregar(producto prod, int cantidad) {
    if (cantidad <= 0) {
        cout << "\nError: La cantidad debe ser mayor a 0" << endl;
        return;
    }
        
    if (cantidad > prod.stock) {
        cout << "\nError: No hay suficiente stock. Stock disponible: " << prod.stock << endl;
        return;
    }
        
    int i = 0;
    bool encontrado = false;
        
    while (i < numItems) {
        if (items[i].prod.nombre == prod.nombre) {
            encontrado = true;
            break;
        }
        i++;
    }
        
    if (encontrado) {
        cout << "\nEl producto ya está en el carrito." << endl;
    } 
    else {
        Itemcarrito nuevoItem(prod, cantidad);
        items[numItems] = nuevoItem;
        numItems++;
        totalArticulos += cantidad;
        prod.stock = prod.stock - cantidad;
        cout << "\n¡Producto agregado al carrito exitosamente!" << endl;
    }
}
    
void CarritoCompras::eliminar(int posicion) {
    if (posicion < 1 || posicion > numItems) {
        cout << "\nPosición inválida." << endl;
        return;
    }
        
    int pos = posicion - 1;
    totalArticulos = totalArticulos - items[pos].cantidad;
        

    int j = pos;
    while (j < numItems - 1) {
        items[j] = items[j + 1];
        j++;
    }
        
    numItems--;
    cout << "\n¡Producto eliminado del carrito!" << endl;
}
    
void CarritoCompras::factura() {
    cout << "\n========================================" << endl;
    cout << "           FACTURA DE COMPRA            " << endl;
    cout << "========================================" << endl;
        
    if (numItems == 0) {
        cout << "\nEl carrito está vacío." << endl;
        cout << "========================================\n" << endl;
        return;
    }
        
    cout << "\nProductos en el carrito:\n" << endl;
        
    int i = 0;
    float total = 0.0;
        
    while (i < numItems) {
        cout << (i + 1) << ". ";
        items[i].mostrarItem();
        total = total + items[i].prod.precio * items[i].cantidad;
        i++;
    }
        
    cout << "\n----------------------------------------" << endl;
    cout << "Total de artículos: "<< totalArticulos << endl;
    cout << "TOTAL A PAGAR: $"<< total << endl;
    cout << "----------------------------------------\n" << endl;
}

