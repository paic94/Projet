#include "CubedAir.h"
#include <iostream>
#include <cmath>

using namespace std;

	double CubedAir::get_TempsolINF() const {return TempsolINF;}
	double CubedAir::get_pressairsolINF() const {return pressairsolINF;} 
	double CubedAir::get_vitesseINF() const {return vitesseINF;}
	double CubedAir::set_TempsolINF(double X)  {TempsolINF = X;}
	double CubedAir::set_pressairsolINF(double Y) {pressairsolINF = Y;}
	double CubedAir::set_vitesseINF(double Z) { vitesseINF = Z ;}
	
	
	double CubedAir::entalpieparmassINF() 
	{
	double h;
	h=(7.0/2.0)*(Gazparfait / Mairsec)*TempsolINF;
	return(h);
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
	
	bool   CubedAir:: muageoupas()
	{
		if (pressvapeausaturante()<presspartvapeau()){return(true);}
		else return (false);
	
	}
	





