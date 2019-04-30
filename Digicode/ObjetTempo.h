#ifndef _OBJETTEMPO
#define _OBJETTEMPO

#include "Chrono.h"

namespace nsDigicode {

    class Chrono;

	class ObjetTempo 
    {
    private:
        int delai;
    protected:
        int attente = 0;
        Chrono* chrono;
    public:
        ObjetTempo(nsDigicode::Chrono* &chrono, const int &delai);
        ~ObjetTempo();
        Chrono* getChrono();
        void finTempo();
        int getDelai();
    };
	
} /* ns_Digicode */

#endif /* _OBJETTEMPO */
