#ifndef CARRO_H
#define CARRO_H

#include "Chasis.h"
#include "Motor.h"
#include "Pintura.h"
#include <string>
using std::string;

class Carro{

    public:
        Chasis chasis;
        Motor motor;
        Pintura pintura;

        Carro(Chasis n_chasis, Motor n_motor, Pintura n_pintura);

        Chasis getChasis();
        void setChasis(Chasis);
        Motor getMotor();
        void setMotor(Motor);
        Pintura getPintura();
        void setPintura(Pintura);

        string toString();

        ~Carro();        
};

#endif