#include "Persona.h"
#include "PoderEspecial.h"

#ifndef WATERBENDER_H
#define WATERBENDER_H

class WaterBender:public Persona{

   private:
        string tribu;
        string armaPreferencia;
        PoderEspecial* poderEspecial;

   public:
       WaterBender();
       WaterBender(string tribu, string armaPreferencia, PoderEspecial* poderEspecial,string nOrigen,string nombreP,int edadP,char s);
       ~WaterBender();

        string getTribu();
       void setTribu(string);

        string getArmaPreferencia();
       void setArmaPreferencia(string);

        PoderEspecial* getPoderEspecial();
       void setPoderEspecial(PoderEspecial*);

        virtual string toString();
};

#endif