#ifndef CARRO_H
#define CARRO_H

#include "Chasis.h"
#include "Motor.h"
#include "Pintura.h"
#include <string>
using std::string;

class Carro{

    public:
        Chasis* chasis;
        Motor* motor;
        Pintura* pintura;
        string nombre;

        Carro();
        Carro(Chasis*, Motor*, Pintura*, string);
        Chasis* getChasis();
        void setChasis(Chasis*);
        Motor* getMotor();
        void setMotor(Motor*);
        Pintura* getPintura();
        void setPintura(Pintura*);
        string getNombre();
        void setNombre(string);

        string toString();

        ~Carro();        
};

#endif