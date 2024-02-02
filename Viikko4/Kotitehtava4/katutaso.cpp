#include "katutaso.h"
#include <iostream>

using namespace std;
Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
}

double Katutaso::laskeKulutus(double hinta)
{
    double KtKulutus = as1.laskeKulutus(hinta)+as2.laskeKulutus(hinta);
    cout << "Katutason ja perityn kerroksen kulutus, kun hinta = " << hinta << "on" << KtKulutus<< endl;
    return KtKulutus;

}
