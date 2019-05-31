#include "AirBender.h"

AirBender::AirBender(){
    cantidadPelo = 0;
    colorFlechas = "";
    poderEspecial = NULL;
}
AirBender::AirBender(double cantidadPelo, string colorFlechas, PoderEspecial* poderEspecial):Persona(nacionOrigen,nombre,edad,sexo){
    this->cantidadPelo = cantidadPelo;
    this->colorFlechas = colorFlechas;
    this->poderEspecial = poderEspecial;
}

AirBender::~AirBender(){
    if (poderEspecial != NULL){
        delete poderEspecial;
        poderEspecial = NULL;
    }
}

double AirBender::getCantidadpelo(){
    return cantidadPelo;
}
void AirBender::setCantidadpelo(double cantidadPelo){
    this->cantidadPelo = cantidadPelo;
}

string AirBender::getColorflechas(){
    return colorFlechas;
}
void AirBender::setColorflechas(string colorFlechas){
    this->colorFlechas = colorFlechas;
}

PoderEspecial* AirBender::getPoderespecial(){
    return poderEspecial;
}
void AirBender::setPoderespecial(PoderEspecial* poderEspecial){
    this->poderEspecial = poderEspecial;
}

string AirBender::toString(){
    string edad_s = to_string(edad);
    string cantidadPelo_s = to_string(cantidadPelo);
    return "Nacion de Origen: "+nacionOrigen+"\nNombre: "+nombre+"\nEdad: "+edad_s+"\nSexo: "+sexo+
            "\nAir Bender:\nCantidad de Pelo: "+cantidadPelo_s+"\nColor de Flechas en su cuerpo: "+colorFlechas+"\n"+poderEspecial->toString();
}