#ifndef PRJ_SYSTEME_H
#define PRJ_SYSTEME_H
#include <iostream>
#include <vector>
#include "Dessinable.h"
#include "Champspotentiel.h"




using namespace std;


class Systeme : public Dessinable
{
private :
	vector <Dessinable*> Collection_Dessins;


public:

	Systeme(){}
	Systeme(Montagne& m , ChampPotentiel& c )
	{
		Collection_Dessins.push_back(new Montagne(m));
	    Collection_Dessins.push_back(new ChampPotentiel(c));
	
	
	}
	Systeme(Systeme const& ) {}
	Systeme& operator =(Systeme const&) {}
	void affiche ();
	void  Dessine();







};



#endif PRJ_SYSTEME_H



