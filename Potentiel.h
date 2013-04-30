#ifndef PRJ_POTENTIEL_H
#define PRJ_POTENTIEL_H
#include <iostream>
#include <cmath>
#include "Vecteur2D.h"
#include "Dessinable.h"

using namespace std;

class Potentiel
{
    private :

        Vecteur2D laplacien;
        Vecteur2D innerPotentiel;

    public :
        Potentiel(double pas, int j , int k , double v) : innerPotentiel((-(pas*k*v)/2),((pas*j*v)/2)) , laplacien(){} // constructeur
        Potentiel() : laplacien() , innerPotentiel(){} // constructeur


        Vecteur2D get_innerPotentiel () const ; // on se sert de ces methodes pour le calcul_laplacien
        Vecteur2D get_laplacien () const ;
        void set_laplacien (double x, double y)  ;
        void set_potentiel (Vecteur2D laplacien, Vecteur2D potentiel);
};


#endif PRJ_POTENTIEL_H
