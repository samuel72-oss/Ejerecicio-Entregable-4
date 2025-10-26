#include "Carro.h"

carro::carro(string _marca,string _modelo,string _placa, int _pasajeros) : vehiculo(_marca,_modelo,_placa){
    pasajeros=_pasajeros;
}

void carro::alquilar(){
    int tiempo;
    cout<<"Deseas alquilar el carro por 1.Horas o 2.Dias: ";
    cin>>tiempo;
    if(marca=="Bugatti" || marca=="MercedesBenz" || marca=="Ferrari"){
        if(tiempo==2){
            int alq=15000000;
            int di;
            cout<<"Cuantos dias deseas alquilar el carro: ";
            cin>>di;
            cout<<"\n";
            alq=alq*di;
            cout<<"\t_____________________"<<endl;
            cout<<"\t       FACTURA       "<<endl;
            cout<<"\t_____________________\n"<<endl;
            cout<<"Carro: "<<marca<<" "<<modelo<<" de "<<pasajeros<<" pasajeros"<<endl;
            cout<<"Placa: "<<placa<<endl;
            cout<<"Costo: $"<<alq<<endl;
        }
        else{
            int alq=1200000;
            int ho;
            cout<<"Cuantas horas deseas alquilar el carro: ";
            cin>>ho;
            cout<<"\n";
            alq=alq*ho;
            cout<<"\t_____________________"<<endl;
            cout<<"\t       FACTURA       "<<endl;
            cout<<"\t_____________________\n"<<endl;
            cout<<"Carro "<<marca<<" "<<modelo<<" de "<<pasajeros<<" pasajeros"<<endl;
            cout<<"Placa: "<<placa<<endl;
            cout<<"Costo: $"<<alq<<endl;
        }
    }
    else{
        if(tiempo==2){
            int alq=5000000;
            int di;
            cout<<"Cuantos dias deseas alquilar el carro: ";
            cin>>di;
            cout<<"\n";
            alq=alq*di;
            cout<<"\t_____________________"<<endl;
            cout<<"\t       FACTURA       "<<endl;
            cout<<"\t_____________________\n"<<endl;
            cout<<"Carro: "<<marca<<" "<<modelo<<" de "<<pasajeros<<" pasajeros"<<endl;
            cout<<"Placa: "<<placa<<endl;
            cout<<"Costo: $"<<alq<<endl;
        }
        else{
            int alq=800000;
            int ho;
            cout<<"Cuantas horas deseas alquilar el carro: ";
            cin>>ho;
            cout<<"\n";
            alq=alq*ho;
            cout<<"\t_____________________"<<endl;
            cout<<"\t       FACTURA       "<<endl;
            cout<<"\t_____________________\n"<<endl;
            cout<<"Carro "<<marca<<" "<<modelo<<" de "<<pasajeros<<" pasajeros"<<endl;
            cout<<"Placa: "<<placa<<endl;
            cout<<"Costo: $"<<alq<<endl;
        }
    }
}