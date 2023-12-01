#include "pokemon.h"
#include <QDebug>
#include <iostream>
#include <random>
#include <chrono>
using namespace std;
Pokemon::Pokemon(QString nombre,float vida,int ataque,int defensa,QString tipo):Pokebola{nombre,
               vida,ataque,defensa},tipo{tipo}
{
    //Creando pokemones
}

Pokemon::Pokemon()
{
    //Creando pokemones
}

Pokemon::~Pokemon()
{
    //Destruyendo pokemones
}

void Pokemon::setTipo(QString tipo)
{
    this->tipo=tipo;
}

void Pokemon::definirValores()
{
    unsigned int semilla_ataque = chrono::steady_clock::now().time_since_epoch().count();
    default_random_engine motor1(semilla_ataque);
    uniform_int_distribution<int>distribucionEntera{1000,5000};
    int atac=distribucionEntera(motor1);
    int def=10000-atac;
    setAtaque(atac);
    setDefensa(def);
    unsigned int semilla_tipo = chrono::steady_clock::now().time_since_epoch().count();
    default_random_engine motor2(semilla_tipo);
    uniform_int_distribution<int>distribucionEntera2{1,3};
    int x=distribucionEntera2(motor2);
    if(x==1){
        setTipo("Electrico");
    }
    else if(x==2){
        setTipo("Fuego");
    }
    else{
        setTipo("Planta");
    }

}
void Pokemon::imprimirInfo()
{
    qInfo()<<"Nombre del pokemon:"<<getNombre();
    qInfo()<<"Vida del pokemon:"<<getVida();
    qInfo()<<"Ataque del pokemon:"<<getAtaque();
    qInfo()<<"Defensa del pokemon:"<<getDefensa();
    qInfo()<<"Tipo:"<<tipo;
    qInfo()<<"\n";
}
