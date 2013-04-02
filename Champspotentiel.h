#ifndef PRJ_CHAMPPOTENTIEL_H
#define PRJ_CHAMPPOTENTIEL_H
#include <iostream>
#include "Vecteur2D.cc"
#include "Montagne.cc"
#include "Potentiel.cc"
using namespace std;


class ChampPotentiel : public Dessinable
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

    double ChampPotentiel::get_coordonneeX () const  // on se sert de ces methodes pour le calcul_laplacien
    double ChampPotentiel::get_coordonneeY () const
    double ChampPotentiel::get_coordonneeZ () const
    double ChampPotentiel::get_lambda () const
    void ChampPotentiel::set_coordonneeX (double X)
    void ChampPotentiel::set_coordonneeY (double Y)
    void ChampPotentiel::set_coordonneeZ (double Z)
    void ChampPotentiel::set_lambda (double l)


    void ChampPotentiel::coordonnee (int BaseX, int BaseY, int BaseZ, double pas)
    void ChampPotentiel::initialise(double v, Montagne M)
    void ChampPotentiel::calcule_laplacien()
    void ChampPotentiel::affiche(collectionPotentiel[][][])
	double ChampPotentiel::erreur() const
    void ChampPotentiel::iteration(double epsilon)
    void ChampPotentiel::resolution (double seuilErreur , int limiteIterations , bool verbeuse = false)
    array<double,3> ChampPotentiel::vitesse(int i, int j, int k)
    string ChampPotentiel:: get_string() const
};



#endif PRJ_CHAMPPOTENTIEL
