#include "Persona.h"
#include "AirBender.h"
#include "FireBender.h"
#include "WaterBender.h"
#include "NonBender.h"
#include "PoderEspecial.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curativo.h"
#include "Invocacion.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int opcion = 0;
    vector<Persona*> personas;
    while (opcion != 4){
        cout << "1)Agregar Personas"<<endl
            <<"2)Eliminar Personas"<<endl
            <<"3)Listar Personas"<<endl
            <<"4)Salir"<<endl
            <<"Ingrese su opcion: ";
        cin >> opcion;
        switch(opcion){
            case 1:
            {
                cout <<"Ingrese la nacion de origen: ";
                string nacionOrigen = "";
                cin >> nacionOrigen;
                cout <<"Ingrese el nombre de la persona: ";
                string nombre = "";
                cin >> nombre;
                cout <<"Ingerse la edad: ";
                int edad = 0;
                cin >> edad;
                cout <<"Ingrese el sexo(M o F): ";
                char sexo = ' ';
                while(sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f'){
                    cin >> sexo;
                }
                break;
            }
            case 2:
            {
                break;
            }
            case 3:
            {
                break;
            }
        }
    }
    return 0;
}