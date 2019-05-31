#include "Defensivo.h"

Defensivo::Defensivo(){
    resistencia = 0;
    duracion = 0;
}
Defensivo::Defensivo(double resistencia, double duracion):PoderEspecial(nombre, nivelPoder){
    this->resistencia = resistencia;
    this->duracion = duracion;
}

double Defensivo::getResistencia(){
    return resistencia;
}
void Defensivo::setResistencia(double resistencia){
    this->resistencia = resistencia;
}

double Defensivo::getDuracion(){
    return duracion;
}
void Defensivo::setDuracion(double duracion){
    this->duracion = duracion;
}

string Defensivo::toString(){
    string nivelPoder_s = to_string(nivelPoder);
    string resistencia_s = to_string(resistencia);
    string duracion_s = to_string(duracion);
    return "Poder Especial:\nNombre: "+nombre+"\n Nivel de Poder: "+nivelPoder_s+
            "\nDefensivo:\nResistencia: "+resistencia_s+"\nDuracion: "+duracion_s;
}