#ifndef PAGO_C
#define PAGO_C
#include <iostream>
#include <string>
using namespace std;

class Pago{
    private:
    string credito{""};
    string debito{""};
    string transbancaria{"5435-2345-7657-6897"};
    
    public:
    Pago()= default;
    Pago(string credito, string debito, string transbancaria){
        this-> debito = debito;
        this-> credito = credito;
        this-> transbancaria = transbancaria;
    }
    
    string getDebito(){return debito;}
    string getCredito(){return credito;}
    string getTransbancaria(){return transbancaria;}

    void setDebito(string debito){this-> debito= debito;}
    void setCredito(string credito){this-> credito= credito;}
    void setTransbancaria(string transbancaria){this-> transbancaria= transbancaria;}
    
};

#endif