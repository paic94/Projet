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
	double CubedAir::get_TempsolINF() const;
	double CubedAir::get_pressairsolINF() const;
	double CubedAir::get_vitesseINF() const;
	double CubedAir::set_TempsolINF(double);
	double CubedAir::set_pressairsolINF(double);
	double CubedAir::set_vitesseINF(double);
	
	
	double CubedAir::entalpieparmassINF();
	double CubedAir::constbernouilli();
	
	//* INF veut dire a l'infinit à ne pas confondre avec l'entalpie par masse à un point précis

	double CubedAir::entalpieparmass();
	double CubedAir::Tempsol();
	double CubedAir::pressairsol();
	double CubedAir::presspartvapeau();
	//*pression partielle de la vapeur d'eau
	double CubedAir::pressvapeausaturante();
	bool   CubedAir:: muageoupas();



}


#endif PRJ_CUBEDAIR_H