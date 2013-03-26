#include "Montagne.h"
#include <cmath>
#include <fstream>


using namespace std;
	Montagne::Montagne(double a0, double b0, double z, double a, double b) : x0(a0), y0(b0), h(z), x(a), y(b) {}


	double Montagne::getH() const 
	{
		return h;
	}

	double Montagne::getX() const 
	{
		return x;
	}

	double Montagne::getY() const 
	{
		return y;
	}

	double Montagne::getX0() const 
	{
		return x0;
	}

	double Montagne::getY0() const 
	{
		return y0;
	}


	double Montagne::altitude(const double& x, const double& y)
	{
		double result;
		result = getH()*exp(-(x - getX0())*(x - getX0())/(2*getX()*getX()) - (y - getY0())*(y - getY0())/(2*getY()*getY()));
		if(result <= 0.5){ result = 0;}
	return result;
	}

