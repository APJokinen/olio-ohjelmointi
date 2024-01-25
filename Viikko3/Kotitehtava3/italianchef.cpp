#include "italianchef.h"
#include <iostream>




//tehtävä 3:
//ItalianChef::ItalianChef(string name):Chef(name)

//Tehtävä 4:
ItalianChef::ItalianChef(string name, int vesi2, int jauhot2):Chef(name)

{
    cout << "Chef " << getName() << " konstruktori" << endl;

    //Tehtävä 4:
    vesi=vesi2;
    jauhot=jauhot2;


}

string ItalianChef::getName()
{
    return name;
}

//tehtävä 3:
//void ItalianChef::makePasta()

//tehtävä 4:
void ItalianChef::makePasta(int vesi2, int jauhot2)



{
    jauhot = jauhot2;
    vesi=vesi2;

    //tehtävä 3:
    //cout << "Chef " << name << " makes pasta" << endl;

    //Tehtävä 4:
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " users jauhot = " << jauhot << endl;
    cout << "Chef " << name << " users vesi = " <<  vesi << endl;


}
