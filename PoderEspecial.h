#ifndef PODERESPECIAL_H
#define PODERESPECIAL_H
#include <string>
using namespace std;

class PoderEspecial{

   protected:
        string nombre;
        int nivelPoder;

   public:
        PoderEspecial();
        PoderEspecial(string,int);

        string getNombre();
        void setNombre(string);

        int getNivelPoder();
        void setNivelPoder(int);

        virtual string toString();
};

#endif