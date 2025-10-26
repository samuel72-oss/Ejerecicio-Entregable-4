#include "Bicicleta.h"

bicicleta::bicicleta(string _marca,string _modelo,string _placa, int _pasajero) : vehiculo(_marca,_modelo,_placa){
    pasajero=_pasajero;
}

void bicicleta::alquilar(){
    int tiempo;
    cout<<"Deseas alquilar el carro por 1.Horas o 2.Dias: ";
    cin>>tiempo;
    if(marca=="specialized" || marca=="trek" || marca=="pinarello"){
        if(tiempo==2){
            int alq=800000;
            int di;
            cout<<"Cuantos dias deseas alquilar la bicicleta: ";
            cin>>di;
            cout<<"\n";
            alq=alq*di;
            cout<<"\t_____________________"<<endl;
            cout<<"\t       FACTURA       "<<endl;
            cout<<"\t_____________________\n"<<endl;
            cout<<"Bicicleta: "<<marca<<" "<<modelo<<" de "<<pasajero<<" pasajeros"<<endl;
            cout<<"Placa: "<<placa<<endl;
            cout<<"Costo: $"<<alq<<endl;
        }
        else{
            int alq=50000;
            int ho;
            cout<<"Cuantas horas deseas alquilar la bicicleta: ";
            cin>>ho;
            cout<<"\n";
            alq=alq*ho;
            cout<<"\t_____________________"<<endl;
            cout<<"\t       FACTURA       "<<endl;
            cout<<"\t_____________________\n"<<endl;
            cout<<"Bicicleta "<<marca<<" "<<modelo<<" de "<<pasajero<<" pasajeros"<<endl;
            cout<<"Placa: "<<placa<<endl;
            cout<<"Costo: $"<<alq<<endl;
        }
    }
    else{
        if(tiempo==2){
            int alq=500000;
            int di;
            cout<<"Cuantos dias deseas alquilar la bicicleta: ";
            cin>>di;
            cout<<"\n";
            alq=alq*di;
            cout<<"\t_____________________"<<endl;
            cout<<"\t       FACTURA       "<<endl;
            cout<<"\t_____________________\n"<<endl;
            cout<<"Bicicleta: "<<marca<<" "<<modelo<<" de "<<pasajero<<" pasajeros"<<endl;
            cout<<"Placa: "<<placa<<endl;
            cout<<"Costo: $"<<alq<<endl;
        }
        else{
            int alq=40000;
            int ho;
            cout<<"Cuantas horas deseas alquilar la bicicleta: ";
            cin>>ho;
            cout<<"\n";
            alq=alq*ho;
            cout<<"\t_____________________"<<endl;
            cout<<"\t       FACTURA       "<<endl;
            cout<<"\t_____________________\n"<<endl;
            cout<<"Bicicleta "<<marca<<" "<<modelo<<" de "<<pasajero<<" pasajeros"<<endl;
            cout<<"Placa: "<<placa<<endl;
            cout<<"Costo: $"<<alq<<endl;
        }
    }
}