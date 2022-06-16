#include <iostream>
#include <string>

#include "cuenta.h"

using namespace std;

void Cuenta::set_num_cuenta(int numc) {

    do {
        if (numc < 0) {
            cout<<"Error: el numero de cuenta no puede ser negativo "<<endl;
            cout<<"- Número de cuenta:"<<endl;
            cin>>numc;
        }

    } while (numc < 0);
   
    num_cuenta = numc;
}

void Cuenta::set_saldo(float sa) {
     do {

        if (sa < 0) {
            cout<<"Error: el saldo no puede ser negativo "<<endl;
            cout<<"- Saldo: "<<endl;
            cin>>sa;
            saldo = sa;
        }

    } while (sa < 0);
   
    saldo = sa;
}

void Cuenta::set_sueldo(float su) {
    do {
        if (su < 0) {
            cout<<"Error: el sueldo no puede ser negativo "<<endl;
            cout<<"- Sueldo:"<<endl;
            cin>>su;
        }
            
    } while (su < 0);

    sueldo = su;
}

void Cuenta::alta_cuenta(){
    int numc = 0;
    float sueldo = 0, saldo = 0;

    cout<<"- Número de cuenta: "<<endl;
    cin>>numc;
    set_num_cuenta(numc);

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

void Cuenta::deposito(float x) {
    if (x < 0) {

        cout<<"Error: No se puede depositar un monto negativo"<<endl;

    } else {

        saldo += x;
        cout<<"Deposito exitoso "<<endl;
        cout<<"Saldo actual: "<<saldo<<endl;
    }
}

void Cuenta::extraccion(float x) {

    if (x < 0) {

        cout<<"Error: No se puede extraer un monto negativo"<<endl;

    } else if (x > saldo) {
    
        cout<<"Saldo insuficiente. Se extrajo: "<<saldo<<endl;
        saldo = 0;
        cout<<"Saldo actual: "<<saldo<<endl;

    } else {

        cout<<"Extracción exitosa "<<endl;
        saldo -= x;
        cout<<"Saldo actual: "<<saldo<<endl;

    }
}

float Cuenta::get_sueldo() {
    return sueldo;
}