#include "Ofensivo.h"

Ofensivo::Ofensivo(){
    rango = 0;
    fuerza = 0;
}
Ofensivo::Ofensivo(double rango, double fuerza,string nombreP,int nivelP):PoderEspecial(nombreP,nivelP){
    this->rango = rango;
    this->fuerza = fuerza;
}

double Ofensivo::getRango(){
    return rango;
}
void Ofensivo::setRango(double rango){
    this->rango = rango;
}

double Ofensivo::getFuerza(){
    return fuerza;
}
void Ofensivo::setFuerza(double fuerza){
    this->fuerza = fuerza;
}

string Ofensivo::toString(){
    string nivelPoder_s = to_string(nivelPoder);
    string rango_s = to_string(rango);
    string fuerza_s = to_string(fuerza);
    return "Poder Especial:\nNombre: "+nombre+"\nNivel de Poder: "+nivelPoder_s+
            "\nOfensivo:\nRango: "+rango_s+"\nFuerza: "+fuerza_s;

}