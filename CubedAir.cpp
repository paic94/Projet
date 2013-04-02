#include "CubedAir.h"
#include <iostream>
#include <cmath>

using namespace std;


	const double Mairsec(0.02896);
	const double Gazparfait(8.3144621);
	double TempsolINF;
	//*température au sol
	double pressairsolINF;
	//* pression de l'air au sol
	double vitesseINF;
public:
	double CubedAir::get_TempsolINF() const {return TempsolINF;}
	double CubedAir::get_pressairsolINF const {return pressairsolINF;} 
	double CubedAir::get_vitesseINF const {return vitesseINF;}
	double CubedAir::set_TempsolINF (double X)  {TempsolINF = X;}
	double CubedAir::set_pressairsolINF(double Y) {pressairsolINF = Y}
	double CubedAir::set_vitesseINF(double Z) { vitesseINF = Z }
	
	
	double CubedAir::entalpieparmassINF() 
	{
	double h;
	h=(7.0/2.0)*(Gazparfait/Mairsec)*TempsolINF;
	return(h);
	}
	
	double CubedAir::constbernouilli()
	{
	
	return( 0.5*vitesseINF*vitesseINF + entalpieparmassINF())
	
	}
	//* pb dans cette methode a regarder plus tard
	double CubedAir::entalpieparmass()
	{
	
	return();

	}
	
	
	double CubedAir::Tempsol()
	{
	
	return ((2.0/7.0)*Mairsec/Gazparfait*entalpieparmass());
	
	
	}


    double CubedAir::pressairsol()
	{
	return(pressairsolINF*pow(TempsolINF,(-7.0/2.0)*pow(Tempsol(),7.0/2.0)));
	
	
	
	}
	//*demander a ludo le calcul suivant
	double CubedAir::presspartvapeau()
	{
	return(0);
	
	
	
	}
	
	
	double CubedAir::pressvapeausaturante()
	{
	 
		return (presspartvapeau()*exp(13.96-5208/Tempsol()));
	
	}
	
	bool   CubedAir:: muageoupas()
	{
		if (pressvapeausaturante()<presspartvapeau()){return(true);}
		else return (false);
	
	}
	





