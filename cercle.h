#ifndef CERCLE_H
#define CERCLE_H

#include "figure.h"

class Cercle : public Figure
{
    public:
        Cercle(double _x=0, double _y=0, double _r=0) :Figure(_x, _y), rayon(_r){}
        void afficher() const;
    protected:
        double rayon;
    private:
};

#endif // CERCLE_H
