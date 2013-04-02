#include "Montagne.h"
#include <cmath>
#include <fstream>


using namespace std;
	Montagne::Montagne(double a0, double b0, double z, double a, double b) : x0(a0), y0(b0), h(z), x(a), y(b) {}
	double Montagne::getH() const {return h;}
	double Montagne::getX() const {return x;}
	double Montagne::getY() const {return y;}
	double Montagne::getX0() const {return x0;}
	double Montagne::getY0() const {return y0;}
	string Montagne::get_string() const {return "h: "+ h + ", x: "+ x +", y: " + y +", x0: " + x0 +", y0: " + y0;}


	/*void Montagne::setH(const double& h) {this->h = h;}
	void Montagne::setX(const double& x) {this->x = x;}  // pas besoin pour l'instant je les laisse au cas où ils nous serviraient dans le future
	void Montagne::setY(const double& y) {this->y = y;}
	void Montagne::setX0(const double& x0) {this->x0 = x0;}
	void Montagne::setY0(const double& y0) {this->y0 = y0;}*/
	double Montagne::altitude(const double& x, const double& y)
	{
		double result;
		result = getH()*exp(-(x - getX0())*(x - getX0())/(2*getX()*getX()) - (y - getY0())*(y - getY0())/(2*getY()*getY()));
		controlevalue(result);
	return result;
	}

	void Montagne:: controlevalue(double& a)
	{
		if(a <= 0.5){ a = 0;}
	}


int main() {
Montagne m(15,15,18,5,10);

//partie tes du programme


ofstream test;
test.open("montagne.dat");
	for(int sx(1); sx<=29 ; sx++){
		for(int sy(1); sy<= 29; sy++){
			test << sx << "  " << sy << "  "<< m.altitude(sx, sy) << endl;  //le test
			//cout << sx << "  " << sy << "  "<< result << endl;
			}
		//cout << endl;
		test << endl;
		}
test.close();


return 0;}
