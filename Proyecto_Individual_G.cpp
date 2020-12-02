// Gerardo Contreras González A01749424

#include "Vendedor.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<Vendedor>& altaVendedor(vector<Vendedor>& vends){
    Vendedor vend;
    string nombrev;
    string edadv;
    string emailv;
    string pagov;
    

    cout << "\nDime el nombre del vendedor: "; cin >> nombrev;
    cout << "Dime la edad del vendedor: "; cin >> edadv;
    cout << "Dime el email del vendedor: "; cin >> emailv;
    cout << "Dime el pago: "; cin >> pagov;
    cout << "\n----------------------------------------\n" << endl;

    vend = Vendedor{nombrev,edadv,emailv,pagov};
    vends.push_back(vend);
    return vends;   
}

void verRegistrov(vector<Vendedor>& vends){
    for(int i=0; i < vends.size(); i++){
        cout << "\nVendedor" << to_string(i+1) << endl;
        cout << "Nombre: " << vends[i].getNombrev() << endl;
        cout << "Edad: " << vends[i].getEdadv() << endl;
        cout << "Email: " << vends[i].getEmailv() << endl;
        cout << "Pago: " << vends[i].getPagov() << endl;
        cout << "\n----------------------------------------\n" << endl;
    }
}


int main(){
    
    vector<Vendedor> registrov;
    int res {7};
    registrov.reserve(5);

    while (res != 3){
        cout << "\n1) Alta de Vendedor\n";
        cout << "2) Consulta Vendedores\n";
        cout << "3) Salir\n";
        cout << "\nOpcion: "; cin >> res;

        switch (res)
        {
            case 1:
                registrov = altaVendedor(registrov);
                break;

            case 2:
                 verRegistrov(registrov);
                 break;
            case 3:
                cout << "Fin del programa\n";
                break;
            default:
                cout << "OPCION INVALIDA\n";
                break;
        }
    }    
}