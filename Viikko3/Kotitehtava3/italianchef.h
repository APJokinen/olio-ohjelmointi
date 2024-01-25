#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>

using namespace std;

class ItalianChef: public Chef
{
    //tehtävä 4 lisäys privateen:
private:
    int vesi, jauhot;
public:
    //tehtävä 4:
    //ItalianChef(string name, int, int);
    //tehtävä 3:
    ItalianChef(string name);
    string getName();
    //Tehtävä 4:
    //void makePasta(int, int);
    //Tehtävä 3:
    void makePasta();
};

#endif // ITALIANCHEF_H

