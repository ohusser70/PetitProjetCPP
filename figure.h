#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
    public:
        Figure(double _x=0, double _y=0) : x(_x), y(_y){};
        virtual ~Figure(){}  // necéssaire à cause des méthode virtuelle
        virtual void afficher() const;
        virtual void translater(double, double);
        //TODO Ajouter une surface et un périmètre aux figures ainsi que
        //  les méthodes concrètes pour les calculer ou y accéder dans les classe dérivées
    protected:
        double x,y;
    private:
};

#endif // FIGURE_H
