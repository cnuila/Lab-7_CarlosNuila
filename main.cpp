#include "Persona.h"
#include "AirBender.h"
#include "FireBender.h"
#include "WaterBender.h"
#include "NonBender.h"
#include "PoderEspecial.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curativo.h"
#include "EarthBender.h"
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
                getline(cin, nombre);
                getline(cin,nombre);
                cout <<"Ingerse la edad: ";
                int edad = 0;
                cin >> edad;
                char sexo = ' ';
                while(sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f'){
                    cout <<"Ingrese el sexo(M o F): ";
                    cin >> sexo;
                }
                int opcionElemento = 0;
                while (opcionElemento <= 0 || opcionElemento >= 6){
                    cout << "1)Air Bender"<<endl
                        <<"2)Fire Bender"<<endl
                        <<"3)Water Bender"<<endl
                        << "4)Earth Bender"<<endl
                        <<"5)Non-Bender"<<endl
                        <<"Ingrese su opcion: ";
                        cin >> opcionElemento;
                }
                PoderEspecial* poderEspecial;
                if (opcionElemento >= 1 && opcionElemento <= 4){
                    int opcionPoder = 0;
                    cout << "Seleccione el poder:"<<endl;
                    while(opcionPoder <= 0 || opcionPoder >= 5){
                        cout << "1)Ofensivo"<<endl
                        <<"2)Defensivo"<<endl
                        <<"3)Curativo"<<endl
                        <<"4)Invocacion"<<endl
                        <<"Ingrese su opcion: ";
                        cin >> opcionPoder;
                    }
                    cout << "Ingrese el nombre del Poder: ";
                    string nombrePoder = "";
                    cin >> nombrePoder;
                    cout << "Ingrese el nivel del Poder: ";
                    int nivel = 0;
                    cin >> nivel;
                    switch(opcionPoder){
                        case 1:
                        {
                            double rango = 0;
                            while (rango <= 0){
                                cout << "Ingrese el rango: ";
                                cin >> rango;
                            }
                            double fuerza = 0;
                            while (fuerza <= 0){
                                cout << "Ingrese la fuerza: ";
                                cin >> fuerza;
                            }
                            poderEspecial = new Ofensivo(rango,fuerza,nombrePoder,nivel);
                            break;
                        }
                        case 2:
                        {
                            double resistencia = 0;
                            while (resistencia <= 0){
                                cout << "Ingrese la resistencia: ";
                                cin >> resistencia;
                            }
                            double duracion = 0;
                            while (duracion <= 0){
                                cout << "Ingrese la duracion: ";
                                cin >> duracion;
                            }
                            poderEspecial = new Defensivo(resistencia,duracion,nombrePoder,nivel);
                            break;
                        }
                        case 3:
                        {
                            string tipoCuracion = "";
                            cout <<"Ingrese el tipo de curacion: ";
                            cin >> tipoCuracion;
                            poderEspecial = new Curativo(tipoCuracion,nombrePoder,nivel);
                            break;
                        }
                        case 4:
                        {
                            string nombreEspecie = "";
                            cout << "Ingrese el nombre de la Especie: ";
                            cin >> nombreEspecie;
                            string especie = "";
                            cout << "Ingrese la especie: ";
                            cin >> especie;
                            string habilidad = "";
                            cout << "Ingrese la habilidad: ";
                            getline(cin,habilidad);
                            getline(cin,habilidad);
                            string tipoMascota = "";
                            int esDomestico = -1;
                            while(esDomestico< 0 || esDomestico > 1){
                                cout << "Es domestico[0] o de Guerras[1]: ";
                                cin >> esDomestico;
                            }
                            if (esDomestico == 0){
                                tipoMascota = "Domestico";
                            }else{
                                tipoMascota = "Guerra";
                            }
                            poderEspecial = new Invocacion(nombreEspecie,especie,habilidad,tipoMascota,nombrePoder,nivel);
                            break;
                        }
                    }
                }
                switch(opcionElemento){
                    case 1:
                    {
                        double cantidadPelo = 0;
                        while(cantidadPelo <= 0){
                            cout << "Ingrese la cantidad de pelo: ";
                            cin >> cantidadPelo;
                        }
                        string colorFlechas = "";
                        cout <<"Ingrese el color de la flechas en el cuerpo: ";
                        cin >> colorFlechas;
                        personas.push_back(new AirBender(cantidadPelo,colorFlechas,poderEspecial,nacionOrigen,nombre,edad,sexo));
                        break;
                    }
                    case 2:
                    {
                        int numCicatrices = 0;
                        while (numCicatrices <= 0){
                            cout <<"Ingrese la cantidad de cicatrices: ";
                            cin >> numCicatrices;
                        }
                        int numVictorias = 0;
                        while (numVictorias <= 0){
                            cout <<"Ingrese la cantidad de victorias: ";
                            cin >> numVictorias;
                        }
                        personas.push_back(new FireBender(numCicatrices,numVictorias,poderEspecial,nacionOrigen,nombre,edad,sexo));
                        break;
                    }
                    case 3:
                    {
                        string tribu = "";
                        string armaPreferencia = "";
                        cout <<"Ingrese el nombre de la tribu: ";
                        getline(cin,tribu);
                        getline(cin,tribu);
                        cout <<"Ingrese el arma de preferencia: ";
                        cin >> armaPreferencia;
                        personas.push_back(new WaterBender(tribu,armaPreferencia,poderEspecial,nacionOrigen,nombre,edad,sexo));
                        break;
                    }
                    case 4:
                    {
                        
                        break;
                    }
                    case 5:
                    {
                        break;
                    }
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