#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

class Triangle : public Figure
{
    public:
        Triangle( double _x=0, double _y=0, double _x2=0, double _y2=0,
                  double _x3=0, double _y3=0) :
                      Figure(_x, _y), x2(_x2), y2(_y2), x3(_x3), y3(_y3){}
        void afficher() const;
        void translater(double, double);

    protected:
        double x2, y2, x3, y3;
    private:
};

#endif // TRIANGLE_H
