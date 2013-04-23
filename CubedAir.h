#ifndef PRJ_CUBEDAIR_H
#define PRJ_CUBEDAIR_H
#include <iostream>
#include <cmath>


using namespace std;

class CubedAir
{
private:
	const double Mairsec(0.02896);
	const double Gazparfait(8.3144621);
	double TempsolINF;
	//*température au sol
	double pressairsolINF;
	//* pression de l'air au sol
	double vitesseINF;

public:
	double get_TempsolINF() const;
	double get_pressairsolINF() const;
	double get_vitesseINF() const;
	double set_TempsolINF(double);
	double set_pressairsolINF(double);
	double set_vitesseINF(double);
	void dessine(ostream& out);


	double entalpieparmassINF();
	double constbernouilli();

	//* INF veut dire a l'infinit à ne pas confondre avec l'entalpie par masse à un point précis

	double entalpieparmass();
	double Tempsol();
	double pressairsol();
	double presspartvapeau();
	//*pression partielle de la vapeur d'eau
	double pressvapeausaturante();
	bool   muageoupas();



}


#endif PRJ_CUBEDAIR_H
