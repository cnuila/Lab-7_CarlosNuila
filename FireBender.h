#include "Persona.h"
#include "PoderEspecial.h"

#ifndef FIREBENDER_H
#define FIREBENDER_H

class FireBender:public Persona{

   private:
        int numCicatrices;
        int numVictorias;
        PoderEspecial* poderEspecial;

   public:
       FireBender();
       FireBender(int numCicatrices, int numVictorias, PoderEspecial* poderEspecial,string nOrigen,string nombreP,int edadP,char s);
       ~FireBender();

        int getNumcicatrices();
       void setNumcicatrices(int);

        int getNumvictorias();
       void setNumvictorias(int);

        PoderEspecial* getPoderEspecial();
        void setPoderEspecial(PoderEspecial*);

        virtual string toString();
};

#endif