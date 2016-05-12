#include <iostream>
using namespace std;
#include "triangle.h"

void Triangle::afficher() const
{
    cout << "Triangle: ";
    Figure::afficher();
    cout << ", (" << x2 << ", "<< y2 << ')'
		<< ", (" << x3 << ", "<< y3 << ')' << endl;
}

void Triangle::translater(double dx, double dy)
{
    Figure::translater(dx, dy);
    x2+=dx; x3+=dx;
    y2+=dx; y3+=dy;
}
