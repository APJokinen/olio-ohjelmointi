#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>

using namespace std;

class ItalianChef: public Chef
{

private:
    //tehtävä 4:
    int vesi, jauhot;
public:
     string getName();

    //tehtävä 3:
    //ItalianChef(string name);
    //void makePasta();

    //tehtävä 4:
    ItalianChef(string name, int, int);
     void makePasta(int, int);




};

#endif // ITALIANCHEF_H

