#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include <string>
#include "cuenta.h"
using namespace std;

class Empleado{

    protected:

    int dni = 0;
    string nombre = "nombre";
    string apellido = "apellido";
    string mail = "mail@dominio.com";
    bool estado = 1; //0 baja, 1 alta
    Cuenta cuenta;

    public:

    Empleado() = default;

    void set_dni(int x);
    void set_nombre(string x);
    void set_apellido(string x);
    void set_mail(string x);

    int get_dni();
    string get_nombre();
    string get_apellido();
    string get_mail();
    bool get_estado();
    Cuenta& get_cuenta();

    virtual void alta();
    void baja();
    virtual void mostrar();
};

#endif