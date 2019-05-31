#include "NonBender.h"

NonBender::NonBender(){
    trabajo = "";
    fuerza = 0;
    velocidad = 0;
}
NonBender::NonBender(string trabajo, double fuerza, double velocidad):Persona(nacionOrigen,nombre,edad,sexo){
    this->trabajo = trabajo;
    this->fuerza = fuerza;
    this->velocidad = velocidad;
}

string NonBender::getTrabajo(){
    return trabajo;
}
void NonBender::setTrabajo(string trabajo){
    this->trabajo = trabajo;
}

double NonBender::getFuerza(){
    return fuerza;
}
void NonBender::setFuerza(double fuerza){
    this->fuerza = fuerza;
}

double NonBender::getVelocidad(){
    return velocidad;
}
void NonBender::setVelocidad(double velocidad){
    this->velocidad = velocidad;
}

string NonBender::toString(){
    string edad_s = to_string(edad);
    string fuerza_s = to_string(fuerza);
    string velocidad_s = to_string(velocidad);
    return "Nacion de Origen: "+nacionOrigen+"\nNombre: "+nombre+"\nEdad: "+edad_s+"\nSexo: "+sexo+
            "\nNon-Bender:\nTrabajo: "+trabajo+"\nFuerza: "+fuerza_s+"\nVelocidad: "+velocidad_s;
}