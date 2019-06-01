#include "PoderEspecial.h"
#include "Persona.h"

#ifndef EARTHBENDER_H
#define EARTHBENDER_H

class EarthBender:public Persona{

   private:
        int colesCosechadas;
        int graduacion;
        PoderEspecial* poderEspecial;

   public:
       EarthBender();
       EarthBender(int colesCosechadas, int graduacion, PoderEspecial* poderEspecial, string nOrigen,string nombreP,int edadP,char s);
        ~EarthBender();

        int getcolesCosechadas();
       void setcolesCosechadas(int);

        int getGraduacion();
       void setGraduacion(int);

        PoderEspecial* getPoderEspecial();
       void setPoderEspecial(PoderEspecial*);

        virtual string toString();
};

#endif