#include "italianchef.h"
#include <iostream>



//Tehtävä 4:
//ItalianChef::ItalianChef(string name, int vesi2, int jauhot2):Chef(name)
//tehtävä 3:
ItalianChef::ItalianChef(string name):Chef(name)
{
    //Tehtävä 4:
    //vesi=vesi2;
    //jauhot=jauhot2;
    //Tehtävä 3:
    cout << "Chef " << getName() << " konstruktori" << endl;
}

string ItalianChef::getName()
{
    return name;
}
//tehtävä 4:
//void ItalianChef::makePasta(int vesi2, int jauhot2)
//tehtävät 3:
void ItalianChef::makePasta()
{
    //Tehtävä 4:
    /*cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " users jauhot = " << jauhot << endl;
    cout << "Chef " << name << " users vesi = " <<  vesi << endl;
    */
    //tehtävät 2 ja 3:
    cout << "Chef " << name << " makes pasta" << endl;
}
