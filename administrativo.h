#include <iostream>
#include <string>
#include "empleado.h"
using namespace std;

class Admin:public Empleado{

    private:

    string puesto;

    public:

    Admin();
    void mostrar();



};

