#include <iostream>
using namespace std;
#include "rectangle.h"

void Rectangle::afficher() const
{
    cout << "Rectangle: ";
    Figure::afficher();
    cout << ", l=" << l << ", h="<< h << endl;
}
