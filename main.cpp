#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <QString>
#include <string>
#include "pokebola.h"
#include "pokemon.h"
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int l{0};
    string apodo{"nada"};

    Pokebola p1{};
    qInfo() << "Escribe cuantos pokemones quieres";
            cin >> l;
    Pokemon pok[l];

    for (int i{0}; i < l; i++)
    {
        cout << "Ingresa un nombre para el pokemon numero:" << i + 1 << ": ";
                cin >> apodo;
        QString nom = QString::fromStdString(apodo);
        pok[i].setNombre(nom);
        pok[i].definirValores();
    }
    system("cls");
    cout<<"\n\t\tLos valores se escogieron aleatoriamente\n\nInfo de los pokemones:\n\n";
    for(int i{0};i<l;i++){
        pok[i].imprimirInfo();
    }

    qInfo()<<"\n\n\tJerarquia de pokemones:\n\n\nPlanta le  gana a Electrico"
               "\nElectrico le gana a Fuego\nFuego le gana a Planta";

    return 0;
}
