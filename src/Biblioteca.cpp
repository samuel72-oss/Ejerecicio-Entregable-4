#include "Biblioteca.h"

Biblioteca::Biblioteca(){
    cantidad = 0;
}

void Biblioteca::agregar(string _titulo, string _autor, string _isbn, bool _disponible){
    if(cantidad < 100){
        titulo[cantidad] = _titulo;
        autor[cantidad] = _autor;
        isbn[cantidad] = _isbn;
        disponible[cantidad] = _disponible;
        cantidad++;
    } else {
        cout<<"La biblioteca esta llena\n";
    }
}

void Biblioteca::eliminar(string _titulo){
    bool encontrado = false;
    int i = 0;

    while(i < cantidad && encontrado == false){
        if(titulo[i] == _titulo){
            encontrado = true;
        } else {
            i++;
        }
    }

    if (encontrado == true) {
        int j;
        j = i;
        while (j < cantidad - 1) {
            titulo[j] = titulo[j + 1];
            autor[j] = autor[j + 1];
            isbn[j] = isbn[j + 1];
            disponible[j] = disponible[j + 1];
            j++;
        }
        cantidad--;
        cout << "Libro eliminado\n";
    } else {
        cout << "No se encontró el libro\n";
    }
}

void Biblioteca::mostrar(){
    if (cantidad==0){
        cout<<"No hay libros en la biblioteca\n";
    } else {
        cout <<"\n---Libros disponibles---\n";
        int i=0;
        while(i < cantidad){
            if(disponible[i]==true){
                cout <<i+1<<"."<<titulo[i]<<"| Autor: "<<autor[i]<<" | ISBN: "<<isbn[i]<<endl;
            }
            i++;
        }
    }
}
