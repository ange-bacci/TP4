#ifndef VOYANT_H
#define VOYANT_H

#include <string>

namespace nsDigicode {
    enum couleur {
        rouge,
        vert
    };

    enum etat {
        allume,
        eteint
    };
}

class Voyant
{
private:
    enum nsDigicode::couleur couleur;
    enum nsDigicode::etat etat;
public:
    Voyant(const enum nsDigicode::couleur &couleur, const enum nsDigicode::etat &etat);
    void allumer();
    void eteindre();
    std::string getStatut() const;
};

#endif // VOYANT_H
