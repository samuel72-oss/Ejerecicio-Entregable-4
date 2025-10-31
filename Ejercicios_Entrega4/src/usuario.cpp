#include "usuario.h"

usuario::usuario(string _nombre, string _apellido, int _cedula) {
    nombre = _nombre;
    apellido = _apellido;
    cedula = _cedula;
    numCompras = 0;
}
    
void historial() {
    cout << "\n========================================" << endl;
    cout << "        HISTORIAL DE COMPRAS            " << endl;
    cout << "========================================" << endl;
    cout << "Usuario: " << nombre << " " << apellido << endl;
    cout << "Cédula: " << cedula << endl;
    cout << "========================================" << endl;
        
    if (numCompras == 0) {
        cout << "\nNo hay compras registradas." << endl;
        cout << "========================================\n" << endl;
        return;
    }
        
    int compraNum = 1;
    int i = 0;
        
    while (i < numCompras) {
        cout << "\n--- COMPRA #" << compraNum << " ---" << endl;
            
        int j = 0;
        float totalCompra = 0.0;
            
        while (j < historialCompras[i].numItems) {
            historialCompras[i].items[j].mostrarItem();
            totalCompra += historialCompras[i].items[j].prod.precio * historialCompras[i].items[j].cantidad;
            j++;
        }
            
        cout << "Total de la compra: $" << totalCompra << endl;
            
        compraNum++;
        i++;
    }
    cout << "========================================\n" << endl;
}