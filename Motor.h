#ifndef MOTOR_H
#define MOTOR_H

#include <string>
using std::string;

class Motor{

    public:
        string electrico;
        string configuracion;

        Motor(string, string);

        string getElectrico();
        void setElectrico(string);
        string getConfiguracion();
        void setConfiguracion(string);
        string toString();

        ~Motor();

};

#endif
