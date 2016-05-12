#include <iostream>
using namespace std;
#include "figure.h"

void Figure::afficher() const
{
    cout << '(' << x << ',' << y << ')' ;
}

void Figure::translater(double dx, double dy)
{
    x+=dx;
    y+=dy;
}
