#include "clavier.h"
#include "kbhit.h"

Clavier::Clavier() {

}

int Clavier::saisirChiffre() {
    char c;
    do {
        c = _kbhit();
    } while (c == 0);
    return c == 0 ? - 1 : c;
}
