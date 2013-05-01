#ifndef PRJ_CIEL_H
#define PRJ_CIEL_H
#include <iostream>
#include <cmath>
#include "CubedAir.h"
#include<vector>
#include "Champspotentiel.h"
;using namespace std;

class Ciel
{
	protected :
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
Ciel(ChampPotentiel const& C);

Ciel(int,int,int,double,double );



}




#endif PRJ_CIEL_H