#include <iostream>
#include <string>
using namespace std;

int main(){

    int op = -1;
    int aux;

    do {
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"Menu de opciones: "<<endl;
        cout<<"1 Dar de alta a empleado"<<endl;
        cout<<"2 Dar de baja a empleado"<<endl;
        cout<<"3 Mostrar lista de clientes"<<endl;
        cout<<"4 Mostrar datos de cliente especifico"<<endl;
        //deposito de dinero
        //extraccion de dinero
        cout<<"5 Finalizar"<<endl;

        cout<<"Ingrese 1, 2, 3 o 4 segun accion a realizar: "<<endl;
        cin>>op;

        switch(op){
            
            case 1:
            
            break;

            case 2:
            
            break;

            case 3:
           
            break;

            case 4:
            break;

            default:
            cout<<"No es una opcion valida"<<endl;
            break;
        }

    } while (op != 5);

    //lista de clientes con punteros

    return 0;

}
