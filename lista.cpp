#include <iostream>
#include <string>

#include "lista.h"
#include "empleado.h"

using namespace std;

void Lista::agregar_empleado(int tipo) {    
    
    if (tipo == 0) {

        E[contadoremp] = new Administrativo;

    } if (tipo == 1) {

        E[contadoremp] = new Profesional;
    }

    E[contadoremp]->alta();
    contadoremp++;
}

void Lista::listado(){

    cout<<"Listado de clientes: "<<endl;

    if (contadoremp == 0) {
        
        cout<<"Todavía no hay clientes"<<endl;

    } else {

        for (int i = 0; i < contadoremp; i++) {
            cout<<"Empleado "<<i+1<<": "<<endl;
            E[i]->mostrar();
        }
        
    }

}

Empleado* Lista::buscar_empleado (int dni_buscar){

    if (contadoremp == 0) {
        cout<<"Todavía no hay clientes"<<endl;
        return 0;
    } else{
        for (int i = 0; i < contadoremp; i++) {
            if (E[i]->get_dni() == dni_buscar){
                return E[i];
            }
        }

        return 0;
    }

}