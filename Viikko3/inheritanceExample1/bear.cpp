#include "bear.h"

string Bear::getSpecies() const { return species; }

void Bear::setSpecies(const string &newSpecies) { species = newSpecies; }

void Bear::bearInfo() {
  cout << "****************************************" << endl;
  cout << "Olen " << species << " karhu" << endl;
  cout << "Varini on " << color << endl;
  cout << "****************************************" << endl;
}


