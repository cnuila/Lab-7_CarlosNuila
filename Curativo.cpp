#include "Curativo.h"

Curativo::Curativo(){
    tipoCuracion = "";
}
Curativo::Curativo(string tipoCuracion,string nombreP,int nivelP):PoderEspecial(nombreP,nivelP){
    this->tipoCuracion = tipoCuracion;
}

string Curativo::getTipoCuracion(){
    return tipoCuracion;
}
void Curativo::setTipoCuracion(string tipoCuracion){
    this->tipoCuracion = tipoCuracion;
}

string Curativo::toString(){
    string nivelPoder_s = to_string(nivelPoder);
    return "Poder Especial:\nNombre: "+nombre+"\nNivel de Poder: "+nivelPoder_s+
            "\nCurativo:\nTipo de Curacion: "+tipoCuracion;
}