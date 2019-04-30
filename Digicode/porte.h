#ifndef PORTE_H
#define PORTE_H

#include "Chrono.h"
#include "ObjetTempo.h"
#include "capteur.h"

class Porte : nsDigicode::ObjetTempo
{
public:
    Porte(nsDigicode::Chrono* &chrono, const int &i);

    bool ouvrir();

private:
    Capteur capteur;
    bool fermer();
};

#endif // PORTE_H
