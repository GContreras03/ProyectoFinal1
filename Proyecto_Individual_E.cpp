//Erick Noe Ramirez Olvera A01753104
#include "Negocio.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<Negocio>& altaNegocio(vector<Negocio>& negs){
    Negocio neg;
    string nombre;
    string sitioweb;
    string lema;
    
    cout << "\nDime el nombre del negocio: "; cin >> nombre;
    cout << "Dime el sitio web: "; cin >> sitioweb;
    cout << "Dime el lema: "; cin >> lema;
    
    cout << "\n----------------------------------------\n" << endl;

    neg = Negocio{nombre,sitioweb,lema};
    negs.push_back(neg);
    return negs;   
}

void verRegistron(vector<Negocio>& negs){
    for(int i=0; i < negs.size(); i++){
        cout << "\nNegocio " << to_string(i+1) << endl;
        cout << "Nombre: " << negs[i].getNombre() << endl;
        cout << "Sitio Web: " << negs[i].getSitioweb() << endl;
        cout << "Lema: " << negs[i].getLema() << endl;

        cout << "\n----------------------------------------\n" << endl;
    }
}


int main(){
    
    vector<Negocio> registron;
    int res {7};
    registron.reserve(5);

    while (res != 3){
        cout << "\n1) Alta de Negocio\n";
        cout << "2) Consulta Negocios\n";
        cout << "3) Salir\n";
        cout << "\nOpcion: "; cin >> res;

        switch (res)
        {
            case 1:
                registron = altaNegocio(registron);
                break;

            case 2:
                 verRegistron(registron);
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