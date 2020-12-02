//Gerardo Contreras González		 A01749424
//Erick Noe Ramirez Olvera       A01753104
#include "Cliente.h"
#include "Pago.h"
#include "Producto.h"
#include "Catalogo.h"
#include <iostream>
#include <vector>
using namespace std;

//Registro cliente

vector<Cliente>& altaCliente(vector<Cliente>& clients){
    Cliente client;
    string nombre;
    string edad;
    string email;
    string direccion;
    
    cout << "\nDime el nombre del cliente: "; cin >> nombre;
    cout << "Dime la edad del cliente: "; cin >> edad;
    cout << "Dime el email del cliente: "; cin >> email;
    cout << "Dime la direccion: "; cin >> direccion;
    cout << "\n----------------------------------------\n" << endl;

    client = Cliente{nombre,edad,email,direccion};
    clients.push_back(client);
    return clients;   
}

void verRegistroc(vector<Cliente>& clients){
    for(int i=0; i < clients.size(); i++){
        cout << "\nCliente" << to_string(i+1) << endl;
        cout << "Nombre: " << clients[i].getNombre() << endl;
        cout << "Edad: " << clients[i].getEdad() << endl;
        cout << "Email: " << clients[i].getEmail() << endl;
        cout << "Direccion: " << clients[i].getDireccion() << endl;
        cout << "\n----------------------------------------\n" << endl;
    }
}

//Registro Forma de Pago
vector<Pago>& altaPago(vector<Pago>& pags){
    Pago pag;
    string credito;
    string debito;
    string transbancaria;
    
    cout << "\nDime el numero de la tarjeta de credito: "; cin >> credito;
    cout << "Dime el numero de la tarjeta de debito: "; cin >> debito;
    cout << "Dime el numero de la cuenta de transaccion: "; cin >> transbancaria;
    cout << "\n----------------------------------------\n" << endl;
    pag = Pago{credito,debito,transbancaria};
    pags.push_back(pag);
    return pags;   
}

void verRegistroP(vector<Pago>& pags){
    for(int i=0; i < pags.size(); i++){
        cout << "\nFormas de pago Cliente " << to_string(i+1) << endl;
        cout << "Tarjeta de Credito: " << pags[i].getCredito() << endl;
        cout << "Targeta de Debito: " << pags[i].getDebito() << endl;
        cout << "Cuenta de Transaccion dada: " << pags[i].getTransbancaria() << endl;
        cout << "\n----------------------------------------\n" << endl;
        
    }
}


int main(){
    cout << "\nRegistros del negocio\n" << endl;
    
    //Registro Cliente

    vector<Cliente> registroc;
    int res {8};
    registroc.reserve(5);

    //Registro Pago

    vector<Pago> registrop;
    registrop.reserve(5);

    //Regristro Producto
    vector<Producto> inventario;
    inventario.reserve(5);

    while (res != 7){
        
        cout << "1) Alta Cliente\n";
        cout << "2) Alta Forma de Pago del Cliente\n";
        cout << "3) Alta Producto\n";
        cout << "4) Consulta Registro Clientes\n";
        cout << "5) Consulta Registro Formas de Pago\n";
        cout << "6) Consulta Registro del Producto\n";
        cout << "7) Salir\n";
        cout << "\nOpcion: "; cin >> res;

        switch (res)
        {
            case 1:
                registroc = altaCliente(registroc);
                break;
            
            case 2:
                registrop = altaPago(registrop);
                break;

            case 3:
                inventario = altaProducto(inventario);
                break;    

            case 4:
                 verRegistroc(registroc);
                 break;
            
            case 5:
                 verRegistroP(registrop);
                 break;

            case 6:
                 verInventario(inventario);
                 break;
                 
            case 7:
                cout << "Fin del programa\n";
                break;
            
            default:
                cout << "OPCION INVALIDA\n";
                break;
        }
    }
}    