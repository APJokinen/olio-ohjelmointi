#include <iostream>

using namespace std;

void game();

int main()
{
    game();
}

void game(){
    bool peli_paattyy = false;
    while(peli_paattyy == false){
        srand(10);
        int arvattava = rand() % 15;
        arvattava += 1;
        int arvaus;
        cout << "Arvaa luku väliltä 1-15!" << endl;
                    cin >> arvaus;
        if (arvaus == arvattava){
            cout << "Oikea vastaus" << endl;
            peli_paattyy = true;
        }else if (arvaus > arvattava){
            cout << "Luku on pienempi" << endl;
        }else if (arvaus < arvattava){
            cout << "Luku on suurempi" << endl;
        }

    }
}
