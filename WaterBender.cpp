#include "WaterBender.h"

WaterBender::WaterBender(){
    tribu = "";
    armaPreferencia = "";
    poderEspecial = NULL;
}
WaterBender::WaterBender(string tribu, string armaPreferencia, PoderEspecial* poderEspecial,string nOrigen,string nombreP,int edadP,char s):Persona(nOrigen,nombreP,edadP,s){
    this->tribu = tribu;
    this->armaPreferencia = armaPreferencia;
    this->poderEspecial = poderEspecial;
}
WaterBender::~WaterBender(){
    if (poderEspecial != NULL){
        delete poderEspecial;
        poderEspecial = NULL;
    }
}

string WaterBender::getTribu(){
    return tribu;
}
void WaterBender::setTribu(string tribu){
    this->tribu = tribu;
}

string WaterBender::getArmaPreferencia(){
    return armaPreferencia;
}
void WaterBender::setArmaPreferencia(string armaPreferencia){
    this->armaPreferencia = armaPreferencia;
}

PoderEspecial* WaterBender::getPoderEspecial(){
    return poderEspecial;
}
void WaterBender::setPoderEspecial(PoderEspecial* poderEspecial){
    this->poderEspecial = poderEspecial;
}

string WaterBender::toString(){
    string edad_s = to_string(edad);
    return "Nacion de Origen: "+nacionOrigen+"\nNombre: "+nombre+"\nEdad: "+edad_s+"\nSexo: "+sexo+
            "\nWater Bender:\nTribu: "+tribu+"\nArma de Preferencia: "+armaPreferencia+"\n"+poderEspecial->toString();
}