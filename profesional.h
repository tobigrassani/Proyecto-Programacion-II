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
    float tiempo_servicio = 0;
    Tarjeta B;

    public:

    Profesional() = default;

    void set_titulo(string x);
    void set_actividad(string x);
    void set_tiempo(float x);

    void mostrar();
    void alta();

};