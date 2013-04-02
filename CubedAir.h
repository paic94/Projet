#ifndef PRJ_CUBEDAIR_H
#define PRJ_CUBEDAIR_H
#include <iostream>
#include <cmath>


using namespace std;

class CubedAir 
{
private:
	const double Mairsec(0.02896)
	const double Gazparfait(8.3144621)
	double TempsolINF;
	//*température au sol
	double pressairsolINF;
	//* pression de l'air au sol
	double vitesse;
public:
	double CubedAir::get_TempsolINF
	double CubedAir::get_pressairsolINF
	double CubedAir::get_vitesseINF
	double CubedAir::set_TempsolINF
	double CubedAir::set_pressairsolINF
	double CubedAir::set_vitesseINF
	
	
	double CubedAir::entalpieparmassINF() 
	double CubedAir::constbernouilli(entalpieparmassINF())
	
	//* INF veut dire a l'infinit à ne pas confondre avec l'entalpie par masse à un point précis

	double CubedAir::entalpieparmass(constbernouilli(entalpieparmassINF()))
	double CubedAir::Tempsol(entalpieparmass(constbernouilli(entalpieparmassINF())))
	double CubedAir::pressairsol(Tempsol(entalpieparmass(constbernouilli(entalpieparmassINF()))))
	double CubedAir::presspartvapeau(pressairsol(Tempsol(entalpieparmass(constbernouilli(entalpieparmassINF())))))
	//*pression partielle de la vapeur d'eau
	double CubedAir::pressvapeausaturante(presspartvapeau(pressairsol(Tempsol(entalpieparmass(constbernouilli(entalpieparmassINF()))))))
	bool   CubedAir:: muageoupas(pressvapeausaturante(presspartvapeau(pressairsol(Tempsol(entalpieparmass(constbernouilli(entalpieparmassINF())))))))

}


#endif PRJ_CUBEDAIR_H