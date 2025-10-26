#include "Biblioteca.h"
#include "Libro.h"
#include <iostream>
using namespace std;

int main() {
    int opcion=0;
    string t;
    string a;
    string i;
    string tituloeliminar;
    Biblioteca b1; 


    while (opcion != 4) {
        cout << "\n===== MENU BIBLIOTECA =====\n";
        cout << "1. Agregar libro\n";
        cout << "2. Eliminar libro\n";
        cout << "3. Mostrar libros disponibles\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Ingrese el titulo del libro (use _ en lugar de espacios): ";
            cin >> t;
            cout << "Ingrese el autor (use _ en lugar de espacios): ";
            cin >> a;
            cout << "Ingrese el ISBN: ";
            cin >> i;
            Libro l1(t, a, i, true);
            b1.agregar(l1.titulo, l1.autor, l1.isbn, l1.disponible);
            cout<<"\n";
            cout<<"Libro agregado exitosamente\n";

            
        }

        else if (opcion == 2) {
            cout << "Ingrese el titulo del libro para eliminar: ";
            cin >> tituloeliminar;
            b1.eliminar(tituloeliminar);     
        }

        else if (opcion == 3) {
            b1.mostrar();
        } 
        else if (opcion == 4) {
            cout << "Gracias por usar el programa\n";

        } 

        else {
            cout << "Opcion invalida\n";
        }
    }
}