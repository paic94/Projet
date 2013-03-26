#ifndef PRJ_VECTEUR_H
#define PRJ_VECTEUR_H
#include <iostream>
#include <cmath>
using namespace std;

class Potentiel
{
    private :
        Vecteur2D laplacien;
        Vecteur2D potentiel;

    public :
        Potentiel(double pas, int j , int k , double v) : potentiel((-(pas*k*v)/2),((pas*j*v)/2)) , laplacien(){} // constructeur
        Potentiel() : laplacien() , potentiel(){} // constructeur

        Vecteur2D Potentiel::get_pot () const ;// on se sert de ces methodes pour le calcul_laplacien
        Vecteur2D Potentiel::get_lapl () const ;
        void Potentiel::set_lapl (double x, double y)  ;
        void Potentiel::set_pot (Vecteur2D laplacien, Vecteur2D potentiel)  ;

};


#endif PRJ_VECTEUR_H
