#include "alarme.h"
#include <iostream>
#include <unistd.h>

using namespace std;

Alarme::Alarme()
{

}

void Alarme::declencher() {
    while (true) {
        cout << "Alarme: la porte n'a pas été refermée." << endl;
        sleep(1);
    }
}
