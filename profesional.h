#pragma once

#include <iostream>
#include <string>
#include "empleado.h"
#include "tarjeta_credito.h"
using namespace std;

class Profesional:public Empleado{

    private:

    string titulo = "titulo";
    string actividad = "actividad";
    string tiempo_servicio = "tiempo de servicio";
    Tarjeta tarjeta;

    public:

    Profesional() = default;

    void set_titulo(string x);
    void set_actividad(string x);
    void set_tiempo(string x);

    void mostrar();
    void alta();

};