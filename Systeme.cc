#include <iostream>
#include "Systeme.h"

using namespace std;



void Systeme :: affiche()
{

	for (unsigned int i(0) ; i<Collection_Dessins.size() ; i++)
	{
	
	cout << Collection_Dessins[i];
	
	
	
	};




};


void  Systeme :: Dessine()
{
	for (unsigned int i(0) ; i<Collection_Dessins.size() ; i++)
	{

		Collection_Dessins[i]->dessine(cout);



	};

};













