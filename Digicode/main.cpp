#include <iostream>
#include <unistd.h>

#include "BD.h"
#include "Archivage.h"
#include "systeme.h"

using namespace std;
using namespace nsDigicode;

int main(void)
{
    BD* bd = new BD();
    Archivage* a = new Archivage();

    Systeme systeme(bd, a);
    systeme.lancer();

//    Voyant v = Voyant(couleur::vert, etat::eteint);

//    v.allumer();
//    cout << v.getStatut() << endl;


    return 0;
}
