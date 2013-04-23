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

    double get_coordonneeX () const;  // on se sert de ces methodes pour le calcul_laplacien
    double get_coordonneeY () const;
    double get_coordonneeZ () const;
    double get_lambda () const;
    void set_coordonneeX (double X);
    void set_coordonneeY (double Y);
    void set_coordonneeZ (double Z);
    void set_lambda (double l);



    void coordonnee (int BaseX, int BaseY, int BaseZ, double pas);
    void initialise(double v, Montagne M);
    void calcule_laplacien();
    void affiche();
	double erreur() const;
    void iteration(double epsilon);
    void resolution (double seuilErreur , int limiteIterations , bool verbeuse = false);
    array<double,3> vitesse(int i, int j, int k);
};



#endif PRJ_CHAMPPOTENTIEL
