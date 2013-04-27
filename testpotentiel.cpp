// ConsoleApplication3.cpp : définit le point d'entrée pour l'application console.
//

#include "montagne.cc"
#include "ChampsPotentiel.cc"

int main()
{
	Montagne M (15,15,0.4,15,15);
	ChampsPotentiel P (30,30,30,20.0/29.0);
	 P.initialise(15,M);
    P.calcule_laplacien(M);
    P.affiche();

	return 0;
}

