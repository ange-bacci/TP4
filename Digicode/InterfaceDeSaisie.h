#ifndef _INTERFACE
#define _INTERFACE
#include <string>

#include "Chrono.h"
#include "ObjetTempo.h"
#include "clavier.h"
#include "voyant.h"

namespace nsDigicode {

    class InterfaceDeSaisie : public ObjetTempo
	{
    private:
        Voyant* voyantRouge;
        Voyant* voyantVert;
        Clavier clavier;
        int nbChiffresAttendus;

    public:
        std::string statut();
        InterfaceDeSaisie(nsDigicode::Chrono* &chrono, const int &delai, const int &nbChiffres);
        ~InterfaceDeSaisie();
        int saisirCode();

        Voyant* getRouge() const;
        Voyant* getVert() const;

	}; // InterfaceDeSaisie
	
} /* ns_Digicode */

#endif /* _INTERFACE */
