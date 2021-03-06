#include <iostream>
#include "Vecteur2D.h"
#include "Montagne.h"
#include "Potentiel.h"
using namespace std;



Vecteur2D Potentiel::get_innerPotentiel () const
{
	return innerPotentiel;
} // on se sert de ces methodes pour le calcul_laplacien

Vecteur2D Potentiel::get_laplacien () const
{
	return laplacien;
}


void Potentiel::set_laplacien (double x, double y)  {
	laplacien = Vecteur2D(x,y);
}


void Potentiel::set_potentiel (Vecteur2D i_laplacien, Vecteur2D i_potentiel)
{
	laplacien = i_laplacien;
	innerPotentiel = i_potentiel;
}

