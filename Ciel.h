#ifndef PRJ_CIEL_H
#define PRJ_CIEL_H
#include <iostream>
#include <cmath>
#include "CubedAir.h"
using namespace std;

class Ciel
{
	private :
    int nbCubeX;
    int nbCubeY;
    int nbCubeZ;

    vector <vector <vector <CubedAir>>> collectionCubedAir;


    // Dimensions de la boite
    double coordonneeX;
    double coordonneeY;
    double coordonneeZ;
    double lambda; // pas

     public :
 void Ciel::coordonnee(double v, Champspotentiel C)
 void Ciel::initialise(nbCubeX,nbCubeY,nbCubeZ,lambda,double v)
}
#endif PRJ_CIEL_H