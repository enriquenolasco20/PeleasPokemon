#ifndef POKEMON_H
#define POKEMON_H
#include "pokebola.h"
using namespace std;
class Pokemon :public Pokebola
{
private:
    QString tipo;
public:
    Pokemon();
    Pokemon(QString nombre,float vida,int ataque,int defensa,QString tipo);
    ~Pokemon();
    void setTipo(QString);
    inline QString getTipo(){return tipo;}


    void definirValores();
    void imprimirInfo();
    void Pelear(Pokemon &otro);
};

#endif // POKEMON_H
