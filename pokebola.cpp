#include "pokebola.h"
#include <QDebug>

Pokebola::Pokebola()
{
    //Constructor sin argumentos
}


Pokebola::Pokebola(QString nombre, float vida, int ataque, int defensa):nombre{nombre},
    vida{5000},ataque{ataque},defensa{defensa}
{
    qInfo()<<"Se creo una pokebola";
}

Pokebola::~Pokebola(){

}


void Pokebola::setNombre(QString nombre)
{
    this->nombre=nombre;
}

void Pokebola::setVida(float vida)
{
    this->vida=vida;
}

void Pokebola::setAtaque(int ataque)
{
    this->ataque=ataque;
}

void Pokebola::setDefensa(int defensa)
{
    this->defensa=defensa;
}


