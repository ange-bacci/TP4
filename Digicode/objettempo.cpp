#include "ObjetTempo.h"

nsDigicode::ObjetTempo::ObjetTempo(nsDigicode::Chrono* &chrono, const int &delai) : delai(delai), chrono(chrono) {

}

nsDigicode::ObjetTempo::~ObjetTempo() {

}

nsDigicode::Chrono* nsDigicode::ObjetTempo::getChrono() {
    return this->chrono;
}

void nsDigicode::ObjetTempo::finTempo() {
    this->attente = 0;
}

int nsDigicode::ObjetTempo::getDelai() {
    return this->delai;
}
