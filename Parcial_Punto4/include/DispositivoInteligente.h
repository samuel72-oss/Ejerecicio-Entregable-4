#ifndef DISPOSITIVOINTELIGENTE_H
#define DISPOSITIVOINTELIGENTE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

/**
*\class Dispositivo Inteligente
*\brief Es un dispositivo con funciones inteligentes
*/

class DispositivoInteligente{
    private:
        string nombre;
        bool estado;
        float Consumo_Energia;
        float total;
        bool Control;
    public:

    /**
    *\brief Constructor y Metodos
    *\brief Encender: Enciende el dispositivo
    *\brief Apagar: Apagar el  dispositivo
    *\brief Medir Consumo: Opera horas * Wats
    *\brief Bloquear Control Remoto: Inhabilita el prender y/o apagar el dispositivo
    *\brief factura: Muestra informacion y el coso total por el consumo de energia
    */

        DispositivoInteligente(string,bool,float,float,bool);
        void menu(vector<DispositivoInteligente>& Disp,int i);
        void encender(vector<DispositivoInteligente>& Disp,int i);
        void apagar();
        float medir_consumo(vector<DispositivoInteligente>& Disp,float horas, int i);
        void bloquear_control_remoto();
        void factura();
};

#endif