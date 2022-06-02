#include <iostream>
#include <string>
#include "cuenta.h"
using namespace std;

class Empleado{

    protected:

    int dni;
    string nombre;
    string apellido;
    string mail;
    bool estado; //0 baja, 1 alta
    Cuenta A;

    public:

    Empleado();

    void set_dni(int x);
    void set_nombre(string x);
    void set_apellido(string x);
    void set_mail(string x);

    int get_dni();
    string get_nombre();
    string get_apellido();
    string get_mail();
    bool get_estado();

    virtual void mostrar();

    ~Empleado();
};