#include <iostream>
#include "Vecteur2D.cc"
#include "Montagne.cc"
using namespace std;


class Potentiel
{


    public :





    Vecteur2D Potentiel::get_pot () const {return potentiel} // on se sert de ces methodes pour le calcul_laplacien
    Vecteur2D Potentiel::get_lapl () const {return laplacien}
    void Potentiel::set_pot (double x, double y)  {pot = Vecteur2D(x,y)}
    void Potentiel::set_lapl (double x, double y)  {lapl = Vecteur2D(x,y)}
    void Potentiel::set_pot (Vecteur2D laplacien, Vecteur2D potentiel)  {pot = Potentiel(laplacien(),potentiel()) }

};
