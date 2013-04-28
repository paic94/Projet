#ifndef PRJ_CUBEDAIR_H
#define PRJ_CUBEDAIR_H
#include <iostream>
#include <cmath>


using namespace std;

class CubedAir
{
private:
	
	double TempsolINF;
	//*température au sol
	double pressairsolINF;
	//* pression de l'air au sol
	double vitesseINF;
	double tauxhumid;
	double MMvapeau;

public:
	static double Mairsec; 
	static double Gazparfait;
	double get_TempsolINF() const;
	double get_pressairsolINF() const;
	double get_vitesseINF() const;
	void set_TempsolINF(double);
	void set_pressairsolINF(double);
	void set_vitesseINF(double);
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
	bool   nuageoupas();
}


#endif PRJ_CUBEDAIR_H
