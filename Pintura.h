#ifndef PINTURA_H
#define PINTURA_H

#include <string>
using std::string;

class Pintura{

    public:
        string color;
        string acabado;

        Pintura();
        Pintura(string, string);

        string getColor();
        void setColor(string);
        string getAcabado();
        void setAcabado(string);
        string toString();

        ~Pintura();

};

#endif