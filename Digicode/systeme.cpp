#include "systeme.h"
#include <iostream>
#include <sstream>
#include <unistd.h>

using namespace nsDigicode;
using namespace std;

Systeme::Systeme(nsDigicode::BD* &bd, nsDigicode::Archivage* &archivage)
    : alarme(new Alarme()),
      chrono(new Chrono()),
      interface(new InterfaceDeSaisie(chrono, 1, 4)),
      porte(new Porte(chrono, 4)),
      bd(bd),
      archivage(archivage)
{

}

Systeme::~Systeme() {
    delete alarme;
    delete chrono;
    delete interface;
    delete porte;
}

void Systeme::lancer() {
    while (true) {

        int code = this->interface->saisirCode();

        if (this->bd->verifier(code)) {
            this->interface->getVert()->allumer();
            cout << this->interface->statut() << endl;
            cout << "Porte ouverte" << endl;
            this->archivage->archiver(code);
            if (this->porte->ouvrir()) {
                cout << "Porte fermée" << endl;
                this->interface->getVert()->eteindre();
                cout << this->interface->statut() << endl;
            } else {
                this->alarme->declencher();
            }
        } else {
            cout << "Code mauvais" << endl;
            this->interface->getRouge()->allumer();
            cout << this->interface->statut() << endl;
            sleep(1);
            this->interface->getRouge()->eteindre();
            cout << this->interface->statut() << endl;
        }

        cout << endl;
    }
}
