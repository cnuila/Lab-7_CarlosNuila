#include "PoderEspecial.h"

#ifndef INVOCACION_H
#define INVOCACION_H

class Invocacion:public PoderEspecial{

   private:
        string nombre;
        string especie;
        string habilidad;
        string tipoMascota;

   public:
       Invocacion();
       Invocacion(string nombre, string especie, string habilidad, string tipoMascota,string nombreP,int nivelP);

        string getNombre();
       void setNombre(string);

        string getEspecie();
       void setEspecie(string);

        string getHabilidad();
       void setHabilidad(string);

        string getTipoMascota();
       void setTipoMascota(string);

        virtual string toString();
};

#endif