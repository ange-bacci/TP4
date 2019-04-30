#ifndef OBJETTEMPO_H
#define OBJETTEMPO_H

#include "Chrono.h"

class ObjetTempo
{
    nsDigicode::Chrono* chrono;
    int delai;
public:
    ObjetTempo(nsDigicode::Chrono* chrono, int delai);

    nsDigicode::Chrono* getChrono() const;
    int getDelai() const;
protected:
    int attente;
};

#endif // OBJETTEMPO_H
