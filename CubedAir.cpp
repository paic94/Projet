#include <iostream>
#include <cmath>
#include "CubedAir.h"
#include<vector>
;using namespace std;


	double CubedAir::get_TempsolINF() const {return TempsolINF;}
	double CubedAir::get_pressairsolINF() const {return pressairsolINF;}
	double CubedAir::get_vitesseINF() const {return vitesseINF;}
	array<double,3> CubedAir::set_vitesse(double X,double Y, double Z)  { array<double, 3> resultat ={X, Y, Z};
	return  resultat;};
	void CubedAir::set_pressairsolINF(double Y) {pressairsolINF = Y;}
	void CubedAir::set_tauxhumid(double W) {tauxhumid = W;}
	void CubedAir::dessine(ostream& out) {out << "Mairsec : " << Mairsec << ", constante gaz parfait : " << Gazparfait << ", Température au sol : " << TempsolINF << ", Pression de l'air au sol : " << pressairsolINF << ", Vitesse : " << vitesseINF << endl; }
	void  CubedAir::set_vitesseINF(double d)  {vitesseINF = d;};
	void  CubedAir::set_hauteur(double h)  {hauteur = h;};
	void  CubedAir::set_largeur(double l)  {largeur = l;};
	void  CubedAir::set_profondeur(double p)  {profondeur = p;};
	void  CubedAir::set_TempsolINF(double e)  {TempsolINF = e;};
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
		return (constbernouilli()-g*hauteur-0.5*vitesseINF*vitesseINF) ;

	 ;

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






