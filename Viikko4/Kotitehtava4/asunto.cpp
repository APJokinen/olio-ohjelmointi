#include "asunto.h"
#include <iostream>

using namespace std;

Asunto::Asunto()
{
    cout << "asunto luotu" << endl;
}

void Asunto::maarita(int asukkaat, int ala)
{
    asukasMaara = asukkaat;
    neliot = ala;
    cout << "Asunto maaritetty asukkaita " <<asukasMaara;
    cout << " nelioita =" << neliot << endl;
}

double Asunto::laskeKulutus(double hinta)
{
    double loppuhinta = hinta*asukasMaara*neliot;
    cout << "asunnon kulutus, kun hinta=" << hinta << " on " << loppuhinta <<endl;
    return loppuhinta;
}
