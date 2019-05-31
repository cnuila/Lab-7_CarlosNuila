#ifndef PERSONA_H
#define PERSONA_H
#include<string>
using namespace std;

class Persona{

   protected:
        string nacionOrigen;
        string nombre;
        int edad;
        char sexo;

   public:
        Persona();
        Persona(string,string,int,char);

        string getNacionorigen();
        void setNacionorigen(string);

        string getNombre();
        void setNombre(string);

        int getEdad();
        void setEdad(int);

        char getSexo();
        void setSexo(char);

        virtual string toString() = 0;
};

#endif