#include <iostream>

using namespace std;

int game(int maxnum);

int main()
{
    int korkein_luku;

    cout << "Anna korkein mahdollinen luku!" << endl;
    cin >> korkein_luku;

    cout << "Arvaus väliltä 1-" << korkein_luku << endl;
    int arvaukset = game(korkein_luku);
    cout << "Peli päättyi!" << endl;
    cout << "Arvausten määrä: " << arvaukset << endl;

    return 0;
}

int game(int maxnum){
    bool peli_paattyy = false;
    int laskuri = 0;
    while(peli_paattyy == false){
        srand(10);
        int arvattava = rand() % (maxnum);
        arvattava += 1;
        int arvaus;
        cout << "Arvaus väliltä 1-" << maxnum << endl;
        cin >> arvaus;
        laskuri += 1;
        if (arvaus == arvattava){
            cout << "Oikea vastaus" << endl;
            peli_paattyy = true;
        }else if (arvaus > arvattava){
            cout << "Luku on pienempi" << endl;
        }else if (arvaus < arvattava){
            cout << "Luku on suurempi" << endl;
        }

    }
    return laskuri;
}
