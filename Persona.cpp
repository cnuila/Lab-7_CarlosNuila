#include "Persona.h"

Persona::Persona(){
    nacionOrigen = "";
    nombre = "";
    edad = 0;
    sexo = ' ';
}
Persona::Persona(string nacionOrigen, string nombre, int edad, char sexo){
    this->nacionOrigen = nacionOrigen;
    this->nombre = nombre;
    this->edad = edad;
    this->sexo = sexo;
}

string Persona::getNacionorigen(){
    return nacionOrigen;
}
void Persona::setNacionorigen(string nacionOrigen){
    this->nacionOrigen = nacionOrigen;
}

string Persona::getNombre(){
    return nombre;
}
void Persona::setNombre(string nombre){
    this->nombre = nombre;
}

int Persona::getEdad(){
    return edad;
}
void Persona::setEdad(int edad){
    this->edad = edad;
}

char Persona::getSexo(){
    return sexo;
}
void Persona::setSexo(char sexo){
    this->sexo = sexo;
}