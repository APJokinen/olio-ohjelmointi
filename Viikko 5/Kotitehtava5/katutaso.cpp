#include "katutaso.h"
#include <iostream>

using namespace std;

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
}

Katutaso::~Katutaso(){
    delete as1;
    delete as2;

    as1= nullptr;
    as2= nullptr;

    cout << "Katutaso tuhottu" << endl;
}

void Katutaso::maaritaAsunnot(){
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;

    as1 = new Asunto;
    as2 = new Asunto;

    as1->maarita(2,100);
    as2->maarita(2,100);
    cout << "Katutason asunnot määritetty" << endl;
}

double Katutaso::laskeKulutus(double hinta){
    cout << "Ennen katutason hintaa" << endl;
    double KtKulutus = as1->laskeKulutus(hinta)+as2->laskeKulutus(hinta);
    cout << "Katutason ja perityn kerroksen kulutus, kun hinta = " << hinta << "on" << KtKulutus<< endl;
    return KtKulutus;

}
