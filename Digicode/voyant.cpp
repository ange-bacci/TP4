#include "voyant.h"
#include "sstream"

using namespace nsDigicode;
using namespace std;

Voyant::Voyant(const enum nsDigicode::couleur &couleur, const enum nsDigicode::etat &etat) : couleur(couleur), etat(etat) {}

void Voyant::allumer() {
    this->etat = etat::allume;
}

void Voyant::eteindre() {
    this->etat = etat::eteint;
}

std::string Voyant::getStatut() const {

    ostringstream oss;

    oss << (this->couleur == couleur::vert ? "VERT" : "ROUGE") << ": " << (this->etat == etat::allume ? "ON" : "OFF") << flush;

    return oss.str();
}
