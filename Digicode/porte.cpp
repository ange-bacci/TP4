#include "porte.h"

using namespace nsDigicode;

Porte::Porte(nsDigicode::Chrono* &chrono, const int &delai) : ObjetTempo(chrono, delai) {}

bool Porte::ouvrir() {
    this->attente = 1;
    this->chrono->demarrer(this);

    while (this->attente != 0) {
        if (this->capteur.detecter()) {
            return fermer();
        }
    }
    return false;
}

bool Porte::fermer() {
    return true;
}
