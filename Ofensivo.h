#include "PoderEspecial.h"

#ifndef OFENSIVO_H
#define OFENSIVO_H

class Ofensivo:public PoderEspecial{

   private:
        double rango;
        double fuerza;

   public:
       Ofensivo();
       Ofensivo(double,double);

        double getRango();
       void setRango(double);

        double getFuerza();
       void setFuerza(double);

        virtual string toString();
};

#endif