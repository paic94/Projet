// ConsoleApplication3.cpp : définit le point d'entrée pour l'application console.
//

#include "Montagne.h"
#include "Champspotentiel.h"

int main()
{
	double a = 20/29;
	Montagne M(15,15,0.4,15,15);
	ChampPotentiel P(30,30,30,a);
	P.initialise(15, M);
    P.calcule_laplacien();
    P.affiche();

	return 0;
}

