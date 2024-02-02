#include "kerrostalo.h"
#include <iostream>

using namespace std;

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}


double Kerrostalo::laskeKulutus(double hinta){
    double kulutus = eka.laskeKulutus(hinta)+toka.laskeKulutus(hinta)+kolmas.laskeKulutus(hinta);
    cout << "Kerrostalon kulutus = " << kulutus << endl;

    return kulutus;

}
