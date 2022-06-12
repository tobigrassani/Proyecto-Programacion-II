#pragma once

#include <iostream>
#include <string>
#include "empleado.h"
using namespace std;

class Administrativo:public Empleado{

    private:

    string puesto = "puesto";

    public:

    Administrativo() = default;

    void set_puesto(string x);
    
    void alta();
    void mostrar();

};

