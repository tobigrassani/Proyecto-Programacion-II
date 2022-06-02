#include <iostream>
#include <string>
#include "empleado.h"
#include "tarjeta_credito.h"
using namespace std;

class Pro:public Empleado{

    private:

    string titulo;
    string actividad;
    float tiempo_servicio;
    Tarjeta B;

    public:

    Pro();
    void mostrar();

    //ver fotito profe pizarron


};