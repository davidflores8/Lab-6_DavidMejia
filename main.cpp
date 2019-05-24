#include <iostream>
#include <string>
#include "Carro.h"
#include "Chasis.h"
#include "Pintura.h"
#include "Motor.h"
#include <sstream>
#include <vector>
using std::vector;
using std::stringstream;
using std::cin;
using std::cout;
using std::endl;
using std::string;
char** crearMatriz(int, int);
void printMatriz(char**);
int main()
{
    vector<Carro*>todos;
    char** matriz=NULL;
    int tam=0;
    vector<Carro*>ensamblados;
    Carro* carro;
    Motor* motor;
    Pintura* pintura;
    Chasis* chasis;
    matriz=crearMatriz(5, 4);
    int opcion=0;
    while(opcion>0 && opcion<4)
    {
        cout<<"Ingrese la opcion que desea: "<<endl;
        cout<<"1. Crear linea de produccion: "<<endl;
        cout<<"2. Avanzar linea de produccion: "<<endl;
        cout<<"3. Ver todos los autos ensamblados correctamente: "<<endl;
        cout<<"4. Salir"<<endl;
        cin>>opcion;

        switch(opcion){
            case 1:
            { 
                int contador=0;
                stringstream n;
                string nombre, ruedas, transmision, electrico, configuracion, color;
                string acabado;
                cout<<"Ingrese el nombre: "<<endl;
                n<<contador;
                nombre=n.str();
                cout<<"--- Chasis ---"<<endl;
                cout<<"Ingrese el tipo de ruedas : "<<endl;
                cin>>ruedas;
                cout<<"Ingrese su transmision [manual, automatica]: "<<endl;
                cin>>transmision;
                chasis=new Chasis(ruedas, transmision);
                cout<<"--- Motor ---"<<endl;
                cout<<"Es su auto electrico? [Si o no]: "<<endl;
                cin>>electrico;
                cout<<"Cual es la configuracion de su motor?: "<<endl;
                cin>>configuracion;
                motor=new Motor(electrico, configuracion);
                cout<<"--- Pintura ---"<<endl;
                cout<<"Ingrese el color de su auto "<<endl;
                cin>>color;
                cout<<"Ingrese el acabado de la pintura de su auto "<<endl;
                cin>>acabado;
                pintura=new Pintura(color, acabado);
                carro=new Carro(chasis, motor, pintura, nombre);
                cout<<"Auto agregado exitosamente"<<endl;
                todos.push_back(carro);
                matriz[tam][0]='P';
                tam=tam+1;           
                printMatriz(matriz);
            }
            break;
            case 2:
            {
                   cout<<"Hola"<<endl; 
            }
                
        }


    }


    return 0;
}

char** crearMatriz(int size, int tam)
{
        char**matriz=NULL;
        matriz=new char*[size];
        for(int i=0; i<size;i++)
        {
                matriz[i]=new char[tam];
        }
        return matriz;
}

void printMatriz(char** matriz)
{
        for(int i=0;i<5;i++)
        {
                for(int j=0;j<4;j++)
                {
                                cout<<"["<<matriz[i][j]<<"]";
                }
                cout<<" "<<endl;
        }
}


