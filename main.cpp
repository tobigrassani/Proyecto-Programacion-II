#include <iostream>
#include <string>

#include "lista.h"

using namespace std;

int main(){

    int op = -1;
    int aux;

    Lista lista;

    do {
        cout<<"------------------------------------------------------"<<endl;
        cout<<"Menu de opciones: "<<endl;
        cout<<"1 Dar de alta a empleado"<<endl;
        cout<<"2 Dar de baja a empleado"<<endl;
        cout<<"3 Mostrar lista de clientes"<<endl;
        cout<<"4 Mostrar datos de cliente especifico"<<endl;
        cout<<"5 Deposito de dinero"<<endl;
        cout<<"6 Extraccion de dinero"<<endl;
        cout<<"7 Finalizar"<<endl;

        cout<<"Ingrese número del 1 al 7 según accion a realizar: "<<endl;
        cin>>op;

        switch(op){
            
            case 1: {

                int tipo;
                cout<<"Ingrese 0 para Administrativo o 1 para Profesional "<<endl;
                cin>>tipo;
                lista.agregar_empleado(tipo);

                break;
            }

            case 2: {
                int dni_buscar;
                Empleado* emp_baja = 0;
                do {
                    cout<<"Ingrese dni de empleado a dar de baja o 0 para regresar al menu: "<<endl;
                    cin>>dni_buscar;
                    if (dni_buscar == 0) {
                        break;
                    }
                    emp_baja = lista.buscar_empleado(dni_buscar);
                    if (emp_baja == 0){
                        cout<<"Error: no existe cliente con dni ingresado"<<endl;
                    } else {
                        emp_baja->baja();
                    }
                   
                } while (emp_baja == 0);

                break;
            }

            case 3: {
            
                lista.listado();

                break;
            }

            case 4: {
                break;
            }

            case 5: {
                break;
            }

            case 6: {
                break;
            }

            case 7: {
                break;
            }

            default: {
                cout<<"No es una opcion valida"<<endl;
                break;
            }
        }

    } while (op != 7);


}
