#include "PoderEspecial.h"

PoderEspecial::PoderEspecial(){
    nombre = "";
    nivelPoder = 0;
}
PoderEspecial::PoderEspecial(string nombre, int nivelPoder){
    this->nombre = nombre;
    this->nivelPoder = nivelPoder;
}

string PoderEspecial::getNombre(){
    return nombre;
}
void PoderEspecial::setNombre(string nombre){
    this->nombre = nombre;
}

int PoderEspecial::getNivelPoder(){
    return nivelPoder;
}
void PoderEspecial::setNivelPoder(int nivelPoder){
    this->nivelPoder = nivelPoder;
}

string PoderEspecial::toString(){
    return "Es un poder";
}