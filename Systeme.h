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

	Systeme();
	Systeme(Montagne& , ChampPotentiel& );
	void dessine ();
	Systeme(Systeme const& autre)= delete;
	Systeme operator =(Systeme const&)=delete;
	ostream& operator<<( ostream& , Systeme const&);






};



#endif PRJ_SYSTEME_H



