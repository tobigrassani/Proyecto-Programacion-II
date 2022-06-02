#include <iostream>
#include <string>
using namespace std;

class Cuenta{
    
    private:
    int num_cuenta;
    float saldo;
    float sueldo;
    
    public:

    Cuenta();
    void set_num_cuenta(int x);
    void set_saldo(float x);
    void set_sueldo(float x);

    int get_num_cuenta();

    void deposito(float x);
    void extraccion(float x);
    

}