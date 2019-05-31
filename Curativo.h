#include "PoderEspecial.h"

#ifndef CURATIVO_H
#define CURATIVO_H

class Curativo:public PoderEspecial{

   private:
        string tipoCuracion;

   public:
       Curativo();
       Curativo(string);

        string getTipoCuracion();
       void setTipoCuracion(string);

       virtual string toString();
};

#endif