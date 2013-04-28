#include <iostream>
#include <cmath>
#include "CubedAir.h"

;using namespace std;

double CubedAir::Mairsec = 0.02896;
double CubedAir::Gazparfait = 8.3144621;

	double CubedAir::get_TempsolINF() const {return TempsolINF;}
	double CubedAir::get_pressairsolINF() const {return pressairsolINF;}
	double CubedAir::get_vitesseINF() const {return vitesseINF;}
	void CubedAir::set_TempsolINF(double X)  {TempsolINF = X;}
	void CubedAir::set_pressairsolINF(double Y) {pressairsolINF = Y;}
	void CubedAir::set_vitesseINF(double Z) { vitesseINF = Z ;}
	void CubedAir::dessine(ostream& out) {out << "Mairsec : " << Mairsec << ", constante gaz parfait : " << Gazparfait << ", Température au sol : " << TempsolINF << ", Pression de l'air au sol : " << pressairsolINF << ", Vitesse : " << vitesseINF << endl; }


	double CubedAir::entalpieparmassINF()
	{
	double h;
	h=(7.0/2.0)* Gazparfait / Mairsec*TempsolINF;
	return h;
	}

	double CubedAir::constbernouilli()
	{

		return( 0.5*vitesseINF*vitesseINF + entalpieparmassINF());

	}
	//* pb dans cette methode a regarder plus tard
	double CubedAir::entalpieparmass()
	{

	return 2;

	}


	double CubedAir::Tempsol()
	{

	return ((2.0/7.0)*Mairsec/Gazparfait*entalpieparmass());


	}


    double CubedAir::pressairsol()
	{
	return(pressairsolINF*pow(TempsolINF,(-7.0/2.0)*pow(Tempsol(),7.0/2.0)));



	}

	double CubedAir::presspartvapeau()
	{



	return(pressairsol()*tauxhumid/(MMvapeau/ Mairsec + tauxhumid));



	}


	double CubedAir::pressvapeausaturante()
	{

		return (presspartvapeau()*exp(13.96-5208/Tempsol()));

	}

	bool CubedAir:: nuageoupas()
	{
		if (pressvapeausaturante()<presspartvapeau()){return(true);}
		else return (false);

	}






