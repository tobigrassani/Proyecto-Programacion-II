#include <iostream>
#include <string>

#include "cuenta.h"

using namespace std;

void Cuenta::set_num_cuenta(int x) {
    num_cuenta = x;
}

void Cuenta::set_saldo(float x) {
    saldo = x;
}

void Cuenta::set_sueldo(float x) {
    sueldo = x;
}

void Cuenta::alta_cuenta(){
    int nc;
    float sueldo, saldo;

    cout<<"- Número de cuenta: "<<endl;
    cin>>nc;
    set_num_cuenta(nc);

    cout<<"- Sueldo: "<<endl;
    cin>>sueldo;
    set_sueldo(sueldo);

    cout<<"- Saldo: "<<endl;
    cin>>saldo;
    set_saldo(saldo);
    
}

void Cuenta::mostrar_cuenta() {

    cout<<" Datos de la cuenta: "<<endl;
    cout<<"- Número de cuenta: "<<num_cuenta<<endl;
    cout<<"- Sueldo: "<<sueldo<<endl;
    cout<<"- Saldo: "<<saldo<<endl;
    
}