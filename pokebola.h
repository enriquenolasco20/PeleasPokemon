#ifndef POKEBOLA_H
#define POKEBOLA_H
#include <QString>

class Pokebola
{
private:
    QString nombre;
    float vida{5000};
    int ataque{0};
    int defensa{0};
public:
    Pokebola();
    Pokebola(QString nombre,float vida,int ataque,int defensa);
    ~Pokebola();
    void setNombre(QString);
    inline QString getNombre(){return nombre;}
    void setVida(float);
    inline float getVida(){return vida;}
    void setAtaque(int);
    inline int getAtaque(){return ataque;}
    void setDefensa(int);
    inline int getDefensa(){return defensa;}


};

#endif // POKEBOLA_H
