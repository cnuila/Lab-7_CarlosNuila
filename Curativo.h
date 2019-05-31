#include "PoderEspecial.h"

#ifndef CURATIVO_H
#define CURATIVO_H

class Curativo:public PoderEspecial{

   private:
        string tipoCuracion;

   public:
       Curativo();
       Curativo(string tipoCuracion,string nombreP,int nivelP);

        string getTipoCuracion();
       void setTipoCuracion(string);

       virtual string toString();
};

#endif