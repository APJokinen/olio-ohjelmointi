#include <iostream>
#include "asunto.h"
#include "katutaso.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    cout << "Määritetään koko kerrostalon kaikki asunnot" << endl;
    Kerrostalo *objectKerrostalo;
    objectKerrostalo = new Kerrostalo;

    cout << "Lasketaan kulutus" << endl;
    double hinta = 1;
    double kulutus = objectKerrostalo->laskeKulutus(hinta);

    cout << "Tuhotaan kerrostalo " << endl;
    delete objectKerrostalo;
    objectKerrostalo = nullptr;

    return 0;



}


