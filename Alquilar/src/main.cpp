#include "Vehiculo.h"
#include "Carro.h"
#include "Bicicleta.h"
#include <iostream>
using namespace std;

int main(){
    int p;
    cout<<"BIENVENIDO AL PROGRAMA"<<endl;    
    cout<<"Que vehiculo deseas alquilar: "<<endl;
    cout<<"1.Carro"<<endl;
    cout<<"2.Bicicleta"<<endl;
    cout<<"Selecciona la opción: ";
    cin>>p;
    cout<<"\n";
    switch(p){
        case 1: {
            string a;
            string b;
            string c;
            int d;
            cout<<"Elige la marca del carro que deseas alquilar"<<endl;
            cout<<"1. Buggati"<<endl;
            cout<<"2. MercedesBenz"<<endl;
            cout<<"3. Renold"<<endl;
            cout<<"4. Mazda"<<endl;
            cout<<"5. Ferrari"<<endl;
            cout<<"ESCRIBE (como se muestra en las opciones) por favor tu decisión final: ";
            cin>>a;
            cout<<"de que año lo deseas (modelo): ";
            cin>>b;
            cout<<"Que placa deseas: ";
            cin>>c;
            cout<<"Cuantos pasajeros 2 o 4: ";
            cin>>d;
            carro c1 = carro(a,b,c,d);
            c1.alquilar();
            break;
        }
        case 2: {
            string e;
            string f;
            string g;
            int h;
            cout<<"Elige la marca de la bicicleta que deseas alquilar"<<endl;
            cout<<"1. Trex"<<endl;
            cout<<"2. Specialized"<<endl;
            cout<<"3. Pinarello"<<endl;
            cout<<"4. Colnago"<<endl;
            cout<<"5. Cervélo"<<endl;
            cout<<"ESCRIBE (como se muestra en las opciones) tu decisión final: "<<endl;
            cin>>e;
            cout<<"\n";
            cout<<"de que año lo deseas (modelo): ";
            cin>>f;
            cout<<"Que placa deseas: ";
            cin>>g;
            cout<<"Es de uno o dos pasajeros: ";
            cin>>h;
            bicicleta b1 = bicicleta(e,f,g,h);
            b1.alquilar();
            break;
        }
    }
}