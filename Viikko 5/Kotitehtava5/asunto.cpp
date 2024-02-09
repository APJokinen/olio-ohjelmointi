#include "asunto.h"
#include "iostream"
using namespace std;

Asunto::Asunto()
{

}



void Asunto::maarita(int asukkaat, int pinta_ala)
{
    asukasMaara=asukkaat;
    neliot = pinta_ala;
    cout << "Asunto maaritetty asukkaita " <<asukasMaara;
    cout << " nelioita =" << neliot << endl;
}

double Asunto::laskeKulutus(double hinta)
{

    int a= asukasMaara;
    int b = neliot;
    cout << "ennen asunnon loppuhinta" << endl;
    double  loppuhinta = hinta*a*b;
    cout << "asunnon loppuhinnan jälkeen" << endl;
    cout << "asunnon kulutus, kun hinta=" << hinta << " on " << loppuhinta <<endl;
    return loppuhinta;
}
