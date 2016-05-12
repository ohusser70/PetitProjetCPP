#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"

class Rectangle : public Figure
{
    public:
        Rectangle(double _x=0, double _y=0, double _l=0, double _h=0) :
            Figure(_x, _y), l(_l), h(_h){}
        void afficher() const;
    protected:
        double l, h;
    private:
};

#endif // RECTANGLE_H
