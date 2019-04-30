#include <iostream>
#include <iomanip>
#include "InterfaceDeSaisie.h"                  
#include "Chrono.h"
#include "sstream"

using namespace std;
using namespace nsDigicode;

std::string nsDigicode::InterfaceDeSaisie::statut ()
{
    ostringstream oss;

    oss << voyantVert->getStatut() << endl
        << voyantRouge->getStatut();

    return oss.str();
}

InterfaceDeSaisie::InterfaceDeSaisie(nsDigicode::Chrono* &chrono, const int &delai, const int &nbChiffres)
    : ObjetTempo (chrono, delai),
      voyantRouge(new Voyant(couleur::rouge, etat::eteint)),
      voyantVert(new Voyant(couleur::vert, etat::eteint)),
      nbChiffresAttendus(nbChiffres){}

InterfaceDeSaisie::~InterfaceDeSaisie() {
    delete voyantVert;
    delete voyantRouge;
}

int InterfaceDeSaisie::saisirCode() {
    ostringstream oss;

    cout << "Saisir code: " << flush;

    for (int i = 0; i < this->nbChiffresAttendus; ++i) {
        int code = this->clavier.saisirChiffre();

        if (code >= 48 && code <= 57) { // ASCII NUMBERS
            oss << (char) code;
            cout << "*" << flush;
        } else {
            i--;
        }
    }

    cout << endl;

    istringstream iss(oss.str());

    int code;
    iss >> code;

    return code;
}

Voyant* InterfaceDeSaisie::getRouge() const {
    return this->voyantRouge;
}

Voyant* InterfaceDeSaisie::getVert() const {
    return this->voyantVert;
}
