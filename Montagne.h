#ifndef PRJ_MONTAGNE_H
#define PRJ_MONTAGNE_H
#include <iostream>
#include "Dessinable.h"

class Montagne : public Dessinable
{
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
double altitude(const double&, const double&);
void dessine(ostream& out) const;
void controlevalue(double& a);



};
#endif PRJ_MONTAGNE