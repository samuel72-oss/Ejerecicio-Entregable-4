#ifndef LIBRO_H
#define LIBRO_H

#include <string>
using namespace std;

class Libro {
    public:
        string titulo;
        string autor;
        string isbn;
        bool disponible;
        Libro(string , string , string , bool);
};

#endif