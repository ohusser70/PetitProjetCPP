#include <iostream>

#include "cercle.h"
#include "rectangle.h"
#include "triangle.h"

int main()
{
    Figure mesFormes[2];

    mesFormes[0] = new Cercle(1, 1, 5);               //coordonnées du centre et rayon
    mesFormes[1] = new Triangle(2, 2, 3, 4, -1, -1);  //coordonnées des 3 points
    mesFormes[2] = new Rectangle(3, 3, 6, 4);         //coordonnées d'un point, de la largeur et de la hauteur

    for (int i=0; i<3; i++)
    {
      mesFormes[i]-> afficher();
    }

    std::cout << "On translate tout :" << endl;
    for (int i=0; i<3; i++)
    {
      mesFormes[i]-> translater(-1.5,1.5);
      mesFormes[i]-> afficher();
      delete mesFormes[i];
    }

	std::cout << "\nAppuyez sur ENTER pour continuer... ";
	std::cin.get();
	return 0;
}
