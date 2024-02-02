#include "asunto.h"
#include "katutaso.h"
#include "kerrostalo.h"

#include <iostream>

using namespace std;

int main()
{
    //Kohta 1:
    //Asunto objectAsunto1;
    //objectAsunto1.maarita(2, 100);
    //objectAsunto1.laskeKulutus(1);
    //Kohta 2:

//    Katutaso objectKatutaso;
//    objectKatutaso.maaritaAsunnot();
//    cout << "Maaritetaan katutason perittyja asuntoja" << endl;
//    objectKatutaso.as1.maarita(2, 100);
//    objectKatutaso.as2.maarita(2, 100);
//    objectKatutaso.as3.maarita(2, 100);
//    objectKatutaso.as4.maarita(2, 100);
//    objectKatutaso.laskeKulutus(1);

    Kerrostalo objectKerrostalo;

    cout << "Määritetään koko kerrostalon kaikki asunnot" << endl;

    //Kulutus neliötä kohden
    objectKerrostalo.laskeKulutus(1);
    return 0;
}
