#include <iostream>
#include <string>
#include "administrativo.h"
using namespace std;

void Administrativo::set_puesto(string x) {
    puesto = x;
}

void Administrativo::alta() {
    
    string p;

    Empleado::alta();

    cout<<"- Puesto: "<<endl;
    cin>>p;
    set_puesto(p);

    cuenta.alta_cuenta();

}

void Administrativo::mostrar() {
    
    Empleado::mostrar();

    cout<<"- Puesto: "<<puesto<<endl;

    cuenta.mostrar_cuenta();
}