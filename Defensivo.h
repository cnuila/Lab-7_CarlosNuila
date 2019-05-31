#include "PoderEspecial.h"

#ifndef DEFENSIVO_H
#define DEFENSIVO_H

class Defensivo:public PoderEspecial{

   private:
        double resistencia;
        double duracion;

   public:
       Defensivo();
       Defensivo(double,double);

        double getResistencia();
       void setResistencia(double);

        double getDuracion();
       void setDuracion(double);

        virtual string toString();
};

#endif