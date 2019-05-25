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
void llenar(char**);
char** Avanzar(char**);
vector<Carro*>todos;
vector<Carro*>ensamblados;

int main()
{
    cout<<"Hola"<<endl;
    char** matriz=NULL;
    int tam=0;
    Carro* carro;
    Motor* motor;
    Pintura* pintura;
    Chasis* chasis;
    matriz=crearMatriz(5, 4);
    llenar(matriz);
    int opcion=1;
    while(opcion>0 && opcion<5)
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
                cout<<"Todos "<<todos.size()<<endl;
                matriz[tam][0]='P';
                tam=tam+1;           
                if(tam==5)
                {
                    tam=0;
                }
                printMatriz(matriz);
                cout<<" "<<endl;
                cout<<" "<<endl;
            } 
            break;
            case 2:
            {
                   cout<<"Avanza linea de produccion "<<endl; 
                   matriz=Avanzar(matriz);
                   printMatriz(matriz);
                   cout<<" "<<endl;
                   cout<<" "<<endl;
            }
            break;
            case 3:
            {

                if(ensamblados.size()>0)
                {
                    for (int i= 0; i <ensamblados.size(); i++)
                    {
                        cout<<ensamblados[i]->toString()<<endl;
                    }
                }
                else
                {
                    cout<<"No hay autos ensamblados aun :("<<endl;
                    cout<<" "<<endl;
                    cout<<"  "<<endl;
                }
                break;
            }
            case 4:
            {
                for (int i = 0; i <todos.size(); i++)
                {
                    delete todos[i];
                }
                todos.clear();
                for (int i = 0; i <ensamblados.size(); i++)
                {
                    delete ensamblados[i];
                }
                todos.clear();
                opcion=10;                
            }
                
        }


    }
    return 0;
}

char** Avanzar(char**matriz){
    int c=0;
    int cont=0;
    int fila;
    for (int i = 0; i <5; i++)
    {
        int t=0;
        for (t= 1; t <4; t++)
        {
            if(matriz[i][0]=='P' && matriz[i][t]==' ')
            {
                matriz[i][t]='C';
                t=5;
            }      
        }
    }        
    for (int j = 0; j < 5; j++)
    {   
       for (int k= 0; k < 4; k++)
        {                
           if(matriz[j][k]!=' '){
                c=c+1;
                cont=cont+1;
            }                
                if(c==4){
                cout<<"El auto ha sido ensamblado corectamente"<<endl;
                ensamblados.push_back(todos[j]);
                for (int h = 0; h < 4; h++)
                {
                    matriz[j][h]=' ';
                }
                
                }
        }
        c=0;
        cont=0;
    }
    return matriz;
    
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

void llenar(char** matriz)
{
        for(int i=0;i<5;i++)
        {
                for(int j=0;j<4;j++)
                {
                                matriz[i][j]=' ';
                }
        }
}



