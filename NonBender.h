#include "Persona.h"
#include "PoderEspecial.h"

#ifndef NONBENDER_H
#define NONBENDER_H

class NonBender:public Persona{

   private:
        string trabajo;
        double fuerza;
        double velocidad;

   public:
       NonBender();
       NonBender(string trabajo, double fuerza, double velocidad,string nOrigen,string nombreP,int edadP,char s);

        string getTrabajo();
       void setTrabajo(string);

        double getFuerza();
       void setFuerza(double);

        double getVelocidad();
       void setVelocidad(double);

      virtual string toString();
};

#endif