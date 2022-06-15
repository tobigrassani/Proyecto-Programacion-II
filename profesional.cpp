#include <iostream>
#include <string>
#include "profesional.h"
using namespace std;

void Profesional::set_titulo(string x) {
    titulo = x;
}

void Profesional::set_actividad(string x) {
    actividad = x;
}

void Profesional::set_tiempo(string x) {
    tiempo_servicio = x;
}

void Profesional::mostrar() {
    
    Empleado::mostrar();

    cout<<"- Titulo: "<<titulo<<endl;
    cout<<"- Actividad: "<<actividad<<endl;
    cout<<"- Tiempo de Servicio: "<<tiempo_servicio<<endl;

    cuenta.mostrar_cuenta();

    cout<<"- Tarjeta de credito: "<<tarjeta.tipo_tarjeta(cuenta.get_sueldo())<<endl;

}

void Profesional::alta() {

    Empleado::alta();

    string t, act, ts;

    cout<<"- Título: "<<endl;
    cin>>t;
    set_titulo(t);

    cout<<"- Actividad: "<<endl;
    cin>>act;
    set_actividad(act);

    cout<<"- Tiempo de servicio: "<<endl;
    cin>>ts;
    set_tiempo(ts);

    cuenta.alta_cuenta();
    
    cout<<"- Tarjeta de credito: "<<tarjeta.tipo_tarjeta(cuenta.get_sueldo())<<endl;

}

