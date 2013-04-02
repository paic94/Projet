#ifndef PRJ_CHAMPPOTENTIEL_H
#define PRJ_CHAMPPOTENTIEL_H
#include <iostream>
#include "Vecteur2D.cc"
#include "Montagne.cc"
#include "Potentiel.cc"
using namespace std;


class ChampPotentiel
{
    private :
    int nbCubeX;
    int nbCubeY;
    int nbCubeZ;

    vector <vector <vector <Potentiel>>> collectionPotentiel;


    // Dimensions de la boite
    double coordonneeX;
    double coordonneeY;
    double coordonneeZ;
    double lambda; // pas

    public :

    double ChampPotentiels::get_coordonneeX () const  // on se sert de ces methodes pour le calcul_laplacien
    double ChampPotentiels::get_coordonneeY () const
    double ChampPotentiels::get_coordonneeZ () const
    double ChampPotentiels::get_lambda () const
    void ChampPotentiels::set_coordonneeX (double X)
    void ChampPotentiels::set_coordonneeY (double Y)
    void ChampPotentiels::set_coordonneeZ (double Z)
    void ChampPotentiels::set_lambda (double l)


    void ChampPotentiels::coordonnee (int BaseX, int BaseY, int BaseZ, double pas)
    void ChampPotentiels::initialise(double v, Montagne M)
    void ChampPotentiels::calcule_laplacien()
    void ChampPotentiels::affiche(collectionPotentiel[][][])
	double ChampPotentiels::erreur() const
    void ChampPotentiels::iteration(double epsilon)
    void ChampPotentiels::resolution (double seuilErreur , int limiteIterations , bool verbeuse = false)
    array<double,3> ChampPotentiels::vitesse(int i, int j, int k)
};



#endif PRJ_CHAMPPOTENTIEL
