#include "capteur.h"
#include "kbhit.h"

Capteur::Capteur() {

}

int Capteur::detecter() {
    return _kbhit();
}
