#include <iostream>

class Montagne{
private :
double x0, y0, h, x, y;

public :
Montagne();
Montagne(double, double, double, double, double);
double getH() const;
double getY() const;
double getX() const;
double getX0() const;
double getY0() const;
/*void setH(const double&);
void setX(const double&);
void setY(const double&);  	/au cas où on en ai besoin dans le future.
void setX0(const double&);
void setY0(const double&);*/
double altitude(const double&, const double&);
void controlevalue(double&);

/*
controlevalue reajuste la valure de la hauteure de la montagne si il est inférieur a 0.5 (il met la valeur a )
*/


};
