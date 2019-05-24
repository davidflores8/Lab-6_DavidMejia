#include "Pintura.h"
#include <iostream>
#include <string>
#include <sstream>
using std::endl;
using std::string;
using std::stringstream;

Pintura::Pintura(string p_color, string p_acabado)
{
    this->color=p_color;
    this->acabado=p_acabado;
}

string Pintura::getColor(){
    return color;
}

void Pintura::setColor(string n_color){
    color=n_color;
}

string Pintura::getAcabado(){
    return acabado;
}

void Pintura::setAcabado(string n_acabado){
    acabado=n_acabado;
}

string Pintura::toString(){
    stringstream retorno;
    retorno<<"Pintura: \n Color: "<<color<<"\n"<<"Acabado: "<<acabado<<"\n"<<endl; 
    return retorno.str();
}


Chasis::~Chasis()
{

}