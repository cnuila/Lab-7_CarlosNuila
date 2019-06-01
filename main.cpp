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
#include<fstream>
#include<typeinfo>
using namespace std;

void escribirArchivo(vector<Persona*>);

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
                        escribirArchivo(personas);
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
                        escribirArchivo(personas);
                        break;
                    }
                    case 3:
                    {
                        string tribu = "";
                        string armaPreferencia = "";
                        int esNorte = -1;
                        while (esNorte < 0 || esNorte >1){
                            cout <<"La tribu es del Norte[0] o del Sur[1]: ";
                            cin >> esNorte;
                        }
                        if (esNorte == 0){
                            tribu = "Norte";
                        }else{
                            tribu = "Sur";
                        }
                        cout <<"Ingrese el arma de preferencia: ";
                        cin >> armaPreferencia;
                        personas.push_back(new WaterBender(tribu,armaPreferencia,poderEspecial,nacionOrigen,nombre,edad,sexo));
                        escribirArchivo(personas);
                        break;
                    }
                    case 4:
                    {
                        int colesCosechadas = 0;
                        while (colesCosechadas<= 0){
                            cout <<"Ingrese el numero de coles cosechadas: ";
                            cin >> colesCosechadas;
                        }
                        double graduacion = 0;
                        while (graduacion<= 0 || graduacion >20){
                            cout <<"Ingrese la graduacion en los ojos: ";
                            cin >> graduacion;
                        }
                        personas.push_back(new EarthBender(colesCosechadas,graduacion,poderEspecial,nacionOrigen,nombre,edad,sexo));
                        escribirArchivo(personas);
                        break;
                    }
                    case 5:
                    {
                        string trabajo = "";
                        cout <<"Ingrese el trabajo: ";
                        getline(cin, trabajo);
                        getline(cin,trabajo);
                        double fuerza = 0;
                        while(fuerza <= 0){
                            cout << "Ingrese la fuerza: ";
                            cin >> fuerza;
                        }
                        double velocidad = 0;
                        while(velocidad <= 0){
                            cout << "Ingrese la velocidad: ";
                            cin >> velocidad;
                        }
                        personas.push_back(new NonBender(trabajo,fuerza,velocidad,nacionOrigen,nombre,edad,sexo));
                        escribirArchivo(personas);
                        break;
                    }
                }
                break;
            }
            case 2:
            {
                if (!personas.empty()){
                    int posicion = -1;
                    while (posicion< 0 || posicion >= personas.size()){
                        cout <<"Ingrese la posicion a eliminar: ";
                        cin >> posicion;
                    }
                    personas.erase(personas.begin() + posicion);
                }else{
                    cout<<endl;
                    cout <<"No ha agregado personas"<<endl;
                    cout<<endl;
                }
                break;
            }
            case 3:
            {
                if (!personas.empty()){
                    cout <<"Lista Personas:"<<endl;
                    for (int i = 0; i < personas.size();i++){
                        cout<<endl;
                        cout << i+1<<")"<<personas[i]->toString()<<endl;
                        cout <<endl;
                    }
                }else{
                    cout<<endl;
                    cout <<"No ha agregado personas"<<endl;
                    cout<<endl;
                }
                break;
            }
        }
    }
    for (int i = 0; i < personas.size();i++){
        delete personas[i];
        personas[i] = NULL;
    }
    return 0;
}

void escribirArchivo(vector<Persona*> personas){
    ofstream archivo;
    archivo.open("Personas.txt",ios::out);
    if (!archivo.fail()){
        for (int i = 0; i < personas.size();i++){
            PoderEspecial* poder;
            archivo << i + 1 << ") Nacion Origen: ";
            archivo << personas[i]->getNacionorigen();
            archivo <<"\nNombre: " << personas[i]->getNombre();
            string edad_s = to_string(personas[i]->getEdad());
            archivo << "\nEdad: "<< edad_s;
            archivo << "\nSexo: "<<personas[i]->getSexo();
            if (typeid(personas[i])== typeid(AirBender)){
                archivo << "\nAir Bender\n";
                AirBender* persona = dynamic_cast<AirBender*>(personas[i]);
                string cantidadPelo_s = to_string(persona->getCantidadpelo());
                archivo << "\nCantidad de Pelo: "<< cantidadPelo_s;
                archivo << "\nColor Flechas: "<<persona->getColorflechas();
                poder = persona->getPoderespecial();
            }
            if (typeid(personas[i])== typeid(FireBender)){
                archivo << "\nFire Bender\n";
                FireBender* persona = dynamic_cast<FireBender*>(personas[i]);
                string numVictorias_s = to_string(persona->getNumvictorias());
                string numCicatrices_s = to_string(persona->getNumcicatrices());
                archivo << "\nNumero de Cicatrices: "<< numCicatrices_s;
                archivo << "\nNumero de Victorias: "<<numVictorias_s;
                poder = persona->getPoderEspecial();
            }
            if (typeid(personas[i])== typeid(EarthBender)){
                archivo << "\nEarth Bender\n";
                EarthBender* persona = dynamic_cast<EarthBender*>(personas[i]);
                string numColes_s = to_string(persona->getcolesCosechadas());
                string graduacion_s = to_string(persona->getGraduacion());
                archivo << "\nNumero de coles cosechadas: "<< numColes_s;
                archivo << "\nGraduacion de los ojos: "<<graduacion_s;
                poder = persona->getPoderEspecial();
            }
            if (typeid(personas[i])== typeid(WaterBender)){
                archivo << "\nWater Bender\n";
                WaterBender* persona = dynamic_cast<WaterBender*>(personas[i]);
                archivo << "\nTribu: "<< persona->getTribu();
                archivo << "\nArma de Preferencia: "<<persona->getArmaPreferencia();
                poder = persona->getPoderEspecial();
            }
            if (typeid(personas[i])== typeid(NonBender)){
                archivo << "\nNon-Bender\n";
                NonBender* persona = dynamic_cast<NonBender*>(personas[i]);
                string fuerza_s = to_string(persona->getFuerza());
                string velocidad_s = to_string(persona->getVelocidad());
                archivo << "\nTrabajo : "<< persona->getTrabajo();
                archivo << "\nFuerza: "<<fuerza_s;
                archivo << "\nVelocidad: "<<velocidad_s;
            }
            if (typeid(personas[i])!= typeid(NonBender)){
                archivo << "\nPoder Especial\n";
                if (typeid(poder) == typeid(Ofensivo)){
                    archivo <<"Ofensivo:";
                    Ofensivo* poder2 = dynamic_cast<Ofensivo*>(poder);
                    string rango_s = to_string(poder2->getRango());
                    archivo<<"\nRango: "<<rango_s;
                }
                if (typeid(poder) == typeid(Defensivo)){
                    archivo <<"Defensivo:";
                    Defensivo* poder2 = dynamic_cast<Defensivo*>(poder);
                    string resistencia_s = to_string(poder2->getResistencia());
                    archivo<<"\nResistencia: "<<resistencia_s;
                }
                if (typeid(poder) == typeid(Curativo)){
                    archivo <<"Curativo:";
                    Curativo* poder2 = dynamic_cast<Curativo*>(poder);
                    archivo<<"\nTipo de Curacion: "<<poder2->getTipoCuracion();
                }
                if (typeid(poder) == typeid(Invocacion)){
                    archivo <<"Invocacion:";
                    Invocacion* poder2 = dynamic_cast<Invocacion*>(poder);
                    archivo<<"\nEspecie: "<<poder2->getEspecie();
                }
            }
            archivo<<"\n";
        }
    }
    archivo.close();
}