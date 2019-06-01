#include "PoderEspecial.h"
#include "Persona.h"

#ifndef EARTHBENDER_H
#define EARTHBENDER_H

class EarthBender:public Persona{

   private:
        int colesCosechadas;
        double graduacion;
        PoderEspecial* poderEspecial;

   public:
       EarthBender();
       EarthBender(int colesCosechadas, double graduacion, PoderEspecial* poderEspecial, string nOrigen,string nombreP,int edadP,char s);
        ~EarthBender();

        int getcolesCosechadas();
       void setcolesCosechadas(int);

        double getGraduacion();
       void setGraduacion(double);

        PoderEspecial* getPoderEspecial();
       void setPoderEspecial(PoderEspecial*);

        virtual string toString();
};

#endif