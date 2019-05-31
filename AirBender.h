#include "Persona.h"
#include "PoderEspecial.h"

#ifndef AIRBENDER_H
#define AIRBENDER_H

class AirBender:public Persona{

   private:
        double cantidadPelo;
        string colorFlechas;
        PoderEspecial* poderEspecial;

   public:
        AirBender();
        AirBender(double cantidadPelo, string colorFlechas, PoderEspecial* poderEspecial, string nOrigen,string nombreP,int edadP,char s);
        ~AirBender();

        double getCantidadpelo();
        void setCantidadpelo(double);

        string getColorflechas();
        void setColorflechas(string);

        PoderEspecial* getPoderespecial();
        void setPoderespecial(PoderEspecial*);

        virtual string toString();
};

#endif