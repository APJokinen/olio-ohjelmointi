#include "kerros.h"
#include <iostream>

using namespace std;

Kerros::Kerros()
{

    cout << "Kerros luotu" << endl;
}

Kerros::~Kerros(){
    delete as1;
    delete as2;
    delete as3;
    delete as4;

    as1=nullptr;
    as2=nullptr;
    as3=nullptr;
    as4=nullptr;
    cout << "Kerros tuhottu" << endl;
}
void Kerros::maaritaAsunnot(){
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;

    as1 = new Asunto;

    as2 = new Asunto;

    as3 = new Asunto;

    as4 = new Asunto;
    cout << "Asunnot luotu, seuraavaksi maaritys" << endl;
    as1->maarita(2, 100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);
    cout << "Asunnot määritetty" << endl;





}

double Kerros::laskeKulutus(double hinta){
    cout << "Ennen kerroksen hintaa" << endl;
    double kulut = as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta) + as3->laskeKulutus(hinta)+ as4->laskeKulutus(hinta);
    cout << "Kerroksen hinnan jälkeen" << endl;
    return kulut;
}
