#include "kerrostalo.h"
#include <iostream>

using namespace std;
Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo(){
    delete eka;
    delete toka;
    delete kolmas;

    eka=nullptr;
    toka = nullptr;
    kolmas=nullptr;
    cout << "Kerrostalo tuhottu" << endl;
}
double Kerrostalo::laskeKulutus(double hinta){

    double kulutus = eka->laskeKulutus(hinta)+toka->laskeKulutus(hinta)+kolmas->laskeKulutus(hinta);
    cout << "Kerrostalon kulutus = " << kulutus << endl;

    return kulutus;

}
