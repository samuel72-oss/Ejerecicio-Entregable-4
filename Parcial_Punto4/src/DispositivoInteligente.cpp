#include "DispositivoInteligente.h"

DispositivoInteligente::DispositivoInteligente(string _nombre,bool _estado,float _total,float _Consumo_Energia,bool _Control){
    nombre=_nombre;
    estado=_estado;
    total=_total;
    Consumo_Energia=_Consumo_Energia;
    Control=_Control;
}

void DispositivoInteligente::menu(vector<DispositivoInteligente>& Disp,int i){
    int op;

    cout<<"\t-------------------"<<endl;
    cout<<"\t   MENÚ DE ACCIÓN "<<nombre<<"\n"<<endl;

    cout<<"1. Encender Dispositivo"<<endl;
    cout<<"2. Apagar Dispositivo"<<endl;
    cout<<"3. Bloquear Dispositivo"<<endl;
    cout<<"Selecciona una opcion: ";
    cin>>op;

    switch(op){
        case 1:
            Disp[i].encender(Disp, i);
            cout<<"\n";
            break;
        case 2:
            Disp[i].apagar();
            break;
        case 3:
            Disp[i].bloquear_control_remoto();
            break;
    }
}

void DispositivoInteligente::encender(vector<DispositivoInteligente>& Disp, int i){
    int h;
    if(Control==false){
        estado=true;
        cout<<"Cuantas horas estuvo encendido el dispositivo "<<nombre<<": ";
        cin>>h;
        Disp[i].medir_consumo(Disp,h,i);
        
    }
    else{
        cout<<"¡¡¡¡¡¡CONTROL BLOQUEADO NO TIENES ACCESO A ESTA FUNCIÓN!!!!!!";
    }
}

void DispositivoInteligente::apagar(){
    if(Control==false){
        estado=false;
        cout<<"Apagado"<<endl;
    }
    else{
        cout<<"¡¡¡¡¡¡CONTROL BLOQUEADO NO TIENES ACCESO A ESTA FUNCIÓN!!!!!!";
    }
}

float DispositivoInteligente::medir_consumo(vector<DispositivoInteligente>& Disp, float horas, int i){
    total=total+(horas*Consumo_Energia);
    Disp[3].total = total;

    return total;
}

void DispositivoInteligente::bloquear_control_remoto(){
    Control=true;
    cout<<"Por favor reinicia el dispositivo para volver a activar la opcion de encendido y apagado"<<endl;
}

void DispositivoInteligente::factura(){
    cout<<"Dispositivo "<<nombre<<"|| Vatios totales "<<total<<"|| Valor a pagar $"<<total*901<<"||"<<endl;
}