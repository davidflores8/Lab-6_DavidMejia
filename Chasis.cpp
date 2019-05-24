#include "Chasis.h"
#include <iostream>
#include <string>
#include <sstream>
using std::endl;
using std::string;
using std::stringstream;

Chasis::Chasis(string p_ruedas, string p_transmision)
{
    this->ruedas=p_ruedas;
    this->transmision=p_transmision;
}

string Chasis::getRuedas(){
    return ruedas;
}

void Chasis::setRuedas(string n_rueda){
    ruedas=n_rueda;
}

string Chasis::getTransmision(){
    return transmision;
}

void Chasis::setTransmision(string n_transmision){
    transmision=n_transmision;
}

string Chasis::toString(){
    stringstream retorno;
    retorno<<"Chasis: \n Ruedas: "<<ruedas<<"\n"<<"Transmision: "<<transmision<<"\n"<<endl; 
    return retorno.str();
}


Chasis::~Chasis()
{

}

