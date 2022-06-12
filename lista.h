#pragma once

#include <iostream>
#include <string>

#include "profesional.h"
#include "administrativo.h"

using namespace std;

class Lista {

    private:
    int contadoremp = 0;
    Empleado* E[10];

    public:

    Lista () = default;

    void agregar_empleado(int tipo);

    void listado();
    
    Empleado* buscar_empleado(int dni_buscar);

    
};
