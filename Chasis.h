#ifndef CHASIS_H
#define CHASIS_H

#include <string>
using std::string;

class Chasis{
    public:
        string ruedas;
        string transmision;

        Chasis();
        Chasis(string, string);

        string getRuedas();
        void setRuedas(string rueda);
        string getTransmision();
        void setTransmision(string trans);
        string toString();

        ~Chasis();


};

#endif