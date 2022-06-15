#include <iostream>
#include <string>
#include "empleado.h"
#include "lista.h"
using namespace std;


void Empleado::set_dni(int x) {
    dni = x;
}

void Empleado::set_nombre(string x) {
    nombre = x;
}

void Empleado::set_apellido(string x) {
    apellido = x;
}

void Empleado::set_mail(string x) {
    mail = x;
}

int Empleado::get_dni() {
    return dni;
}

void Empleado::mostrar() {
    cout<<"Datos empleado: "<<endl;
    cout<<"- Nombre: "<<nombre<<endl;
    cout<<"- Apellido: "<<apellido<<endl;
    cout<<"- DNI: "<<dni<<endl;
    cout<<"- Mail: "<<mail<<endl;

    if(estado==0){
        cout<<"- Estado: Baja"<<endl;
    } else {
        cout<<"- Estado: Alta"<<endl;
    }
}

void Empleado::alta() {

    int doc;
    string n, a, m;

    cout<<"Ingrese datos: "<<endl;

    cout<<"- DNI: "<<endl;
    cin>>doc;
    set_dni(doc);

    cout<<"- Nombre: "<<endl;
    cin>>n;
    set_nombre(n);

    cout<<"- Apellido: "<<endl;
    cin>>a;
    set_apellido(a);

    cout<<"- Mail: "<<endl;
    cin>>m;
    set_mail(m);

}

void Empleado::baja() {
    estado = 0;
}

Cuenta& Empleado::get_cuenta() {
    return cuenta;
}

