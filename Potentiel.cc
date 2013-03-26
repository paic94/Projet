#include <iostream>
#include "Vecteur2D.cc"
#include "Montagne.cc"
using namespace std;


class Potentiel
{
    Vecteur2D laplacien;
    Vecteur2D potentiel;

    public :

    Potentiel(double pas, int j , int k , double v) : potentiel((-(pas*k*v)/2),((pas*j*v)/2)) , laplacien(){} // constructeur
    Potentiel() : laplacien() , potentiel(){} // constructeur



    Vecteur2D Potentiel::get_pot () const {return potentiel} // on se sert de ces methodes pour le calcul_laplacien
    Vecteur2D Potentiel::get_lapl () const {return laplacien}
    void Potentiel::set_pot (double x, double y)  {pot = Vecteur2D(x,y)}
    void Potentiel::set_lapl (double x, double y)  {lapl = Vecteur2D(x,y)}
    void Potentiel::set_pot (Vecteur2D laplacien, Vecteur2D potentiel)  {pot = Potentiel(laplacien(),potentiel()) }

};
