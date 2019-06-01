#include "EarthBender.h"

EarthBender::EarthBender(){
    colesCosechadas = 0;
    graduacion = 0;
    poderEspecial = 0;
}
EarthBender::EarthBender(int colesCosechadas, double graduacion, PoderEspecial* poderEspecial, string nOrigen,string nombreP,int edadP,char s):Persona(nOrigen,nombreP,edadP,s){
    this->colesCosechadas = colesCosechadas;
    this->graduacion = graduacion;
    this->poderEspecial = poderEspecial;
}

EarthBender::~EarthBender(){
    if (poderEspecial != NULL){
        delete poderEspecial;
        poderEspecial = NULL;
    }
}

int EarthBender::getcolesCosechadas(){
    return colesCosechadas;
}
void EarthBender::setcolesCosechadas(int colesCosechadas){
    this->colesCosechadas = colesCosechadas;
}

double EarthBender::getGraduacion(){
    return graduacion;
}
void EarthBender::setGraduacion(double graduacion){
    this->graduacion = graduacion;
}

PoderEspecial* EarthBender::getPoderEspecial(){
    return poderEspecial;
}
void EarthBender::setPoderEspecial(PoderEspecial* poderEspecial){
    this->poderEspecial = poderEspecial;
}

string EarthBender::toString(){
    string edad_s = to_string(edad);
    string colesCosechadas_s = to_string(colesCosechadas);
    string graduacion_s = to_string(graduacion);
    return "Nacion de Origen: "+nacionOrigen+"\nNombre: "+nombre+"\nEdad: "+edad_s+"\nSexo: "+sexo+
            "\nEarth Bender:\nColes Cosechadas: "+colesCosechadas_s+"\nGraduacion de Ojos: "+graduacion_s+"\n"+poderEspecial->toString();
}
