#include "CarritoCompras.h"
#include "Itemcarrito.h"
#include "producto.h"
#include "usuario.h"

int main() {
    producto prod1("Camiseta Polo", 45000, 25);
    producto prod2("Jean Levis", 95000, 15);
    producto prod3("Chaqueta de Cuero", 180000, 10);
    producto prod4("Zapatos Deportivos Nike", 220000, 20);
    producto prod5("Sudadera con Capucha", 65000, 30);
    
    string nombre;
    string apellido;
    int cedula;
    
    cout << "\n======== BIENVENIDO A LA TIENDA ========" << endl;
    cout << "Por favor ingrese sus datos:\n" << endl;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Apellido: ";
    cin >> apellido;
    cout << "Cédula: ";
    cin >> cedula;
    
    usuario user1(nombre, apellido, cedula);
    CarritoCompras carrito1;
    
    int opcion = 0;
    
    while (opcion != 6) {
        cout << "\n======== TIENDA EN LÍNEA ========" << endl;
        cout << "1. Ver productos disponibles" << endl;
        cout << "2. Agregar producto al carrito" << endl;
        cout << "3. Eliminar producto del carrito" << endl;
        cout << "4. Ver carrito (Factura)" << endl;
        cout << "5. Finalizar compra" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        
        if (opcion == 1) {
            cout << "\n--- PRODUCTOS DISPONIBLES ---\n" << endl;
            prod1.mostrar();
            prod2.mostrar();
            prod3.mostrar();
            prod4.mostrar();
            prod5.mostrar();
            
        } else if (opcion == 2) {
            int prodOpcion = 0;
            int cantidad = 0;
            
            cout << "\n--- AGREGAR PRODUCTO ---" << endl;
            cout << "1. " << prod1.nombre << " - $" << prod1.precio << endl;
            cout << "2. " << prod2.nombre << " - $" << prod2.precio << endl;
            cout << "3. " << prod3.nombre << " - $" << prod3.precio << endl;
            cout << "4. " << prod4.nombre << " - $" << prod4.precio << endl;
            cout << "5. " << prod5.nombre << " - $" << prod5.precio << endl;
            cout << "Seleccione el producto: ";
            cin >> prodOpcion;
            
            cout << "Ingrese la cantidad: ";
            cin >> cantidad;
            
            if (prodOpcion == 1) {
                carrito1.agregar(prod1, cantidad);
            } else if (prodOpcion == 2) {
                carrito1.agregar(prod2, cantidad);
            } else if (prodOpcion == 3) {
                carrito1.agregar(prod3, cantidad);
            } else if (prodOpcion == 4) {
                carrito1.agregar(prod4, cantidad);
            } else if (prodOpcion == 5) {
                carrito1.agregar(prod5, cantidad);
            } else {
                cout << "\nOpción inválida." << endl;
            }
            
        } else if (opcion == 3) {
            if (carrito1.numItems == 0) {
                cout << "\nEl carrito está vacío." << endl;
            } else {
                carrito1.factura();
                int posicion;
                cout << "\nIngrese el número del producto a eliminar: ";
                cin >> posicion;
                carrito1.eliminar(posicion);
            }
            
        } else if (opcion == 4) {
            carrito1.factura();
            
        } else if (opcion == 5) {
            carrito1.factura();
            if (carrito1.numItems > 0) {
                user1.historialCompras[user1.numCompras] = carrito1;
                user1.numCompras++;
                cout << "\n¡Compra registrada en el historial!" << endl;
            }
            cout << "\n¿Desea ver el historial de compras? (1=Sí, 0=No): ";
            int verHistorial;
            cin >> verHistorial;
            if (verHistorial == 1) {
                user1.historial();
            }
            
            carrito1 = CarritoCompras();
            
        } else if (opcion == 6) {
            cout << "\n¡Gracias por su compra!" << endl;
        } else {
            cout << "\nOpción inválida. Intente de nuevo." << endl;
        }
    }
    
    return 0;
}