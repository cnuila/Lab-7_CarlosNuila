#include "FireBender.h"

FireBender::FireBender(){
    numCicatrices = 0;
    numVictorias = 0;
    poderEspecial = NULL;
}
FireBender::FireBender(int numCicatrices, int numVictorias, PoderEspecial* poderEspecial):Persona(nacionOrigen,nombre,edad,sexo){
    this->numCicatrices = numCicatrices;
    this->numVictorias = numVictorias;
    this->poderEspecial = poderEspecial;
}

FireBender::~FireBender(){
    if (poderEspecial != NULL){
        delete poderEspecial;
        poderEspecial = NULL;
    }
}

int FireBender::getNumcicatrices(){
    return numCicatrices;
}
void FireBender::setNumcicatrices(int numCicatrices){
    this->numCicatrices = numCicatrices;
}

int FireBender::getNumvictorias(){
    return numVictorias;
}
void FireBender::setNumvictorias(int numVictorias){
    this->numVictorias = numVictorias;
}

PoderEspecial* FireBender::getPoderEspecial(){
    return poderEspecial;
}
void FireBender::setPoderEspecial(PoderEspecial* poderEspecial){
    this->poderEspecial = poderEspecial;
}

string FireBender::toString(){
    string edad_s = to_string(edad);
    string numCicatrices_s = to_string(numCicatrices);
    string numVictorias_s = to_string(numVictorias);
    return "Nacion de Origen: "+nacionOrigen+"\nNombre: "+nombre+"\nEdad: "+edad_s+"\nSexo: "+sexo+
            "\nFire Bender:\nNumero de Cicatrices en la guerra: "+numCicatrices_s+"\nNumeros de Victorias en Pai Sho: "+numVictorias_s+"\n"+poderEspecial->toString();
}