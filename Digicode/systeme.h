#ifndef SYSTEME_H
#define SYSTEME_H

#include "BD.h"
#include "Archivage.h"
#include "alarme.h"
#include "Chrono.h"
#include "InterfaceDeSaisie.h"
#include "porte.h"

class Systeme
{
    Alarme* alarme;
    nsDigicode::Chrono* chrono;
    nsDigicode::InterfaceDeSaisie* interface;
    Porte* porte;

    nsDigicode::BD* bd;
    nsDigicode::Archivage* archivage;


public:
    Systeme(nsDigicode::BD* &bd, nsDigicode::Archivage* &archivage);
    ~Systeme();
    void lancer();
};

#endif // SYSTEME_H
