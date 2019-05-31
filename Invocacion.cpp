#include "Invocacion.h"

Invocacion::Invocacion(){
    nombre = "";
    especie = "";
    habilidad = "";
    tipoMascota = "";
}
Invocacion::Invocacion(string nombre, string especie, string habilidad, string tipoMascota,string nombreP,int nivelP):PoderEspecial(nombreP,nivelP){
    this->nombre = nombre;
    this->especie = especie;
    this->habilidad = habilidad;
    this->tipoMascota = tipoMascota;
}

string Invocacion::getNombre(){
    return nombre;
}
void Invocacion::setNombre(string nombre){
    this->nombre = nombre;
}

string Invocacion::getEspecie(){
    return especie;
}
void Invocacion::setEspecie(string especie){
    this->especie = especie;
}

string Invocacion::getHabilidad(){
    return habilidad;
}
void Invocacion::setHabilidad(string habilidad){
    this->habilidad = habilidad;
}

string Invocacion::getTipoMascota(){
    return tipoMascota;
}
void Invocacion::setTipoMascota(string tipoMascota){
    this->tipoMascota = tipoMascota;
}

string Invocacion::toString(){
    string nivelPoder_s = to_string(nivelPoder);
    return "Poder Especial:\nNombre: "+nombre+"\n Nivel de Poder: "+nivelPoder_s+
            "\nInvocacion:\nNombre: "+nombre+"\nEspecie: "+especie+"\nHabilidad: "+habilidad+"\nTipo de Mascota: "+tipoMascota;
}