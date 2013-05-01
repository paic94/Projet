#include <iostream>
#include "Ciel.h"
#include"Champspotentiel.h"
#include<vector>
;using namespace std;



 Ciel :: Ciel( ChampPotentiel const& C)
 {
nbCubeX=C.get_nbCubeX();

nbCubeY=C.get_nbCubeX ();

nbCubeZ=C.get_nbCubeX ();

 vector<CubedAir> vect_inter(nbCubeZ);

 vector<vector<CubedAir>>vect_inter_2(nbCubeY,vect_inter);

 vector<vector<vector<CubedAir>>>vect_inter_3(nbCubeX,vect_inter_2);

 collectionCubedAir=vect_inter_3;


for (size_t i(0); i < nbCubeX;i++)
{
	for (size_t j(0); j<nbCubeY;j++)
{
	  for (size_t k(0); k<nbCubeZ;k++)
{
	int s,d,f,g,h;
	cout <<"valeurs des coordonnées respectives x,y et z de la vitesse de la temperature au sol et de l humidité au sol"<<endl;
	cin>> s>>d>>f>>g>>h ;

	collectionCubedAir[i][j][k].set_vitesse(s,d,f)=C.vitesse(s,d,f); 
	collectionCubedAir[i][j][k].set_hauteur(k*lambda);
	collectionCubedAir[i][j][k].set_largeur(i*lambda);
	collectionCubedAir[i][j][k].set_profondeur(j*lambda);
	collectionCubedAir[i][j][k].set_TempsolINF(g);
	collectionCubedAir[i][j][k].set_tauxhumid(g);

	  };
	
	
	};
 };

};
 
 
 Ciel:: Ciel(int X,int Y,int Z,double lamb,double v)
 {
nbCubeX=X;

nbCubeY=Y;

nbCubeZ=Z;

lambda=lamb ;

 vector<CubedAir> vect_inter(nbCubeZ);

 vector<vector<CubedAir>>vect_inter_2(nbCubeY,vect_inter);

 vector<vector<vector<CubedAir>>>vect_inter_3(nbCubeX,vect_inter_2);

 collectionCubedAir=vect_inter_3;


for (size_t i(0); i<nbCubeX;i++)
{
	for (size_t j(0); j<nbCubeY;j++)
{
	  for (size_t k(0); k<nbCubeZ;k++)
{
	

	collectionCubedAir[i][j][k].set_vitesseINF(v);
	
	};
	
	
	};
 };

};




