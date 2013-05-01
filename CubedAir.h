#ifndef PRJ_CUBEDAIR_H
#define PRJ_CUBEDAIR_H
#include <iostream>
#include <cmath>
#include "constantes.h"
#include<array>
#include "ChampsPotentiel.h"

using namespace std;

class CubedAir
{
protected:
	
	double TempsolINF;
	//*température au sol
	double pressairsolINF;
	//* pression de l'air au sol
	array<double,3> vitesse;
	double vitesseINF;
	double tauxhumid;
	// la vitesse inf est la norme de la vitesse qui est un tableau de taille 3
	
	
	double largeur;
	double profondeur;
	double hauteur;

public:
	
	
	
	double get_TempsolINF() const;
	double get_pressairsolINF() const;
	double get_vitesseINF() const;
	void  set_vitesseINF(double) ;
	array<double,3> set_vitesse(double,double,double);
	void set_pressairsolINF(double);
	void set_tauxhumid(double);
	void set_hauteur(double);
	void set_largeur(double);
	void set_profondeur(double);
	void set_TempsolINF(double);
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
