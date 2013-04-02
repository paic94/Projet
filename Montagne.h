#include <iostream>

class Montagne : public Dessinable{
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
string get_string() const



};
