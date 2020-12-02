// Gerardo Contreras González A01749424

#ifndef Vendedor_C
#define Vendedor_C
#include <iostream>
#include <string>
using namespace std;

class Vendedor{
    private:
    string nombrev{""};
    string edadv{""};
    string emailv{""};
    string pagov{""};

    public:
    Vendedor() = default;
    Vendedor(string nombrev, string edadv, string emailv, string pagov){
        this-> nombrev= nombrev;
        this-> edadv=edadv;
        this->emailv=emailv;
        this->pagov=pagov;
    }   
        
    string getNombrev(){return nombrev;}
    string getEdadv(){return edadv;}
    string getEmailv(){return emailv;}
    string getPagov(){return pagov;}

    void setNombrev(string nombrev){this-> nombrev= nombrev;}
    void setEdadv(string edadv){this-> edadv=edadv;}
    void setEmailv(string emailv){this->emailv=emailv;}
    void setPagov(string pagov){ this->pagov=pagov;}
        
};

#endif