#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
    public:
        Figure(double _x=0, double _y=0) : x(_x), y(_y){};
        virtual ~Figure(){}  // nec�ssaire � cause des m�thode virtuelle
        virtual void afficher() const;
        virtual void translater(double, double);
        //TODO Ajouter une surface et un p�rim�tre aux figures ainsi que
        //  les m�thodes concr�tes pour les calculer ou y acc�der dans les classe d�riv�es
    protected:
        double x,y;
    private:
};

#endif // FIGURE_H
