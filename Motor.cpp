#include "Motor.h"
#include <iostream>
#include <string>
#include <sstream>
using std::endl;
using std::string;
using std::stringstream;

Motor::Motor(){

}

Motor::Motor(string p_electrico, string p_configuracion)
{
    electrico=p_electrico;
    configuracion=p_configuracion;
}

string Motor::getElectrico(){
    return electrico;
}

void Motor::setElectrico(string n_electrico){
    electrico=n_electrico;
}

string Motor::getConfiguracion(){
    return configuracion;
}

void Motor::setConfiguracion(string n_configuracion){
    configuracion=n_configuracion;
}

string Motor::toString(){
    stringstream retorno;
    retorno<<"Motor: \n Electrico: "<<electrico<<"\n"<<"Configuracion del motor: "<<configuracion<<"\n"<<endl; 
    return retorno.str();
}


Motor::~Motor()
{
    
}