#include "cercle.h"
#include <iostream>
using namespace std;

void Cercle::afficher() const
{
    cout << "Cercle: ";
    Figure::afficher();
    cout << ", rayon=" << rayon << endl;
}


