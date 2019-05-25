#include "Chasis.h"
#include "Carro.h"
#include "Motor.h"
#include "Pintura.h"
#include <iostream>
#include <string>
#include <sstream>
using std::endl;
using std::string;
using std::stringstream;

Carro::Carro(){
    nombre="";
    chasis=new Chasis();
    motor=new Motor();
    pintura=new Pintura();
}

Carro::Carro(Chasis* nChasis, Motor* nMotor, Pintura* nPintura, string nnombre)
{
    nombre=nnombre;
    chasis=nChasis;
    motor=nMotor;
    pintura=nPintura;
}

Motor* Carro::getMotor()
{
    return motor;
}

void Carro::setMotor(Motor* pMotor)
{
    motor=pMotor;
}

Chasis* Carro::getChasis()
{
    return chasis;
}

void Carro::setChasis(Chasis* pchasis)
{
    chasis=pchasis;
}

Pintura* Carro::getPintura()
{
    return pintura;
}

void Carro::setPintura(Pintura* ppintura)
{
    pintura=ppintura;
}

string Carro::getNombre()
{
    return nombre;
}

void Carro::setNombre(string nnombre){
    nombre=nnombre;
}

string Carro::toString(){
    stringstream retorno;
    retorno<<chasis->toString()<<"\n"<<endl;
    retorno<<motor->toString()<<"\n"<<endl; 
    retorno<<pintura->toString()<<"\n"<<endl; 
    return retorno.str();
}

Carro::~Carro()
{
    delete chasis;
    delete motor;
    delete pintura;
}
