#include <iostream>
#include "Vecteur2D.h"
#include "Montagne.h"
#include "Potentiel.h"
#include "Champspotentiel.h"
#include "Dessinable.h"

using namespace std;



	double epsilon(0.1);
    double ChampPotentiel::get_coordonneeX () const {return coordonneeX;} // on se sert de ces methodes pour le calcul_laplacien
    double ChampPotentiel::get_coordonneeY () const {return coordonneeY;}
    double ChampPotentiel::get_coordonneeZ () const {return coordonneeZ;}
    double ChampPotentiel::get_lambda () const {return lambda;}
    void ChampPotentiel::set_coordonneeX (double X)  {coordonneeX = X;}
    void ChampPotentiel::set_coordonneeY (double Y)  {coordonneeY = Y;}
    void ChampPotentiel::set_coordonneeZ (double Z)  {coordonneeZ = Z;}
    void ChampPotentiel::set_lambda (double l)  {lambda = l;}


    void ChampPotentiel::coordonnee (int BaseX, int BaseY, int BaseZ, double pas)
    {
        BaseX = nbCubeX;
        BaseY = nbCubeY;
        BaseZ = nbCubeZ;
        coordonneeX = BaseX*pas;
        coordonneeY = BaseY*pas;
        coordonneeZ = BaseZ*pas;

    }
    void ChampPotentiel::initialise(double v, Montagne M)
    {

        Vecteur2D p, lap;
        for (int i(0); i < nbCubeX; i++)
        {
            vector<vector<Potentiel>> vectorDimension2;
            for (int j(0); j < nbCubeY; j++)
            {
                vector<Potentiel> vectorDimension1;
                for (int k(0); k < nbCubeZ; k++)
                {
                    Potentiel pot;
                    if(lambda*k > M.altitude(i*lambda,(((j-(nbCubeY-1))/2)*lambda)))
                    {
                        pot = Potentiel(lambda,j,k,v);
                    }
                    else
					{
                        pot =  Potentiel();
                    }
				
                    vectorDimension1.push_back(pot);
				}
                vectorDimension2.push_back(vectorDimension1);
            }
            collectionPotentiel.push_back(vectorDimension2);
        }

    }

 void ChampPotentiel::calcule_laplacien()
{
   Vecteur2D lap, u;
    for (int i(1); i < nbCubeX-1; i++)
        {
            for (int j(1); j < nbCubeY-1; j++)
            {
                for (int k(1); k < nbCubeZ-1; k++)
                {
                    collectionPotentiel[i][j][k].set_laplacien(collectionPotentiel[i-1][j][k].get_innerPotentiel().getDim1() +
                                                 collectionPotentiel[i][j-1][k].get_innerPotentiel().getDim1() +
                                                 collectionPotentiel[i][j][k-1].get_innerPotentiel().getDim1() +
                                                 6*collectionPotentiel[i][j][k].get_innerPotentiel().getDim1() +
                                                 collectionPotentiel[i+1][j][k].get_innerPotentiel().getDim1() +
                                                 collectionPotentiel[i][j+1][k].get_innerPotentiel().getDim1() +
                                                 collectionPotentiel[i][j][k+1].get_innerPotentiel().getDim1(),

                                                 collectionPotentiel[i-1][j][k].get_innerPotentiel().getDim2() +
                                                 collectionPotentiel[i][j-1][k].get_innerPotentiel().getDim2() +
                                                 collectionPotentiel[i][j][k-1].get_innerPotentiel().getDim2() +
                                                 6*collectionPotentiel[i][j][k].get_innerPotentiel().getDim2() +
                                                 collectionPotentiel[i+1][j][k].get_innerPotentiel().getDim2() +
                                                 collectionPotentiel[i][j+1][k].get_innerPotentiel().getDim2() +
                                                 collectionPotentiel[i][j][k+1].get_innerPotentiel().getDim2() );
                    }

                }
            }
        }
void ChampPotentiel::affiche() {
	for (int i(1); i <= nbCubeX; ++i) {
		for ( int j(1); j<= nbCubeY; ++j) {
			for (int k(1); k<= nbCubeZ ; ++k) {
				cout << i << " " << j << " " << k << " "  << endl;
				cout << "Potentiel : x :" << collectionPotentiel[i][j][k].get_innerPotentiel().getDim1() << endl;
				cout << "            y :" << collectionPotentiel[i][j][k].get_innerPotentiel().getDim2() << endl;
				cout << "Laplacien : x :" << collectionPotentiel[i][j][k].get_innerPotentiel().getDim1() << endl;
				cout << "            y :" << collectionPotentiel[i][j][k].get_innerPotentiel().getDim2() << endl;


				} ;
				cout << " " << endl;
			}
		}
}

    double ChampPotentiel::erreur() const
    {
        double err(0);
         for (int i(1); i < nbCubeX; i++)
        {
            for (int j(1); j < nbCubeY; j++)
            {
                for (int k(1); k < nbCubeZ; k++)
                {
    err = err + collectionPotentiel[i][j][k].get_laplacien().getDim1() * collectionPotentiel[i][j][k].get_laplacien().getDim1() +
          collectionPotentiel[i][j][k].get_laplacien().getDim2() * collectionPotentiel[i][j][k].get_laplacien().getDim2();
                }
            }
        }
        return err;
    }
    void ChampPotentiel::iteration()
    {
        for (int i(1); i < nbCubeX-1; i++)
        {
            for (int j(1); j < nbCubeY-1; j++)
            {
                for (int k(1); k < nbCubeZ-1; k++)
                {
                    collectionPotentiel[i][j][k].set_potentiel(collectionPotentiel[i][j][k].get_innerPotentiel() +
                                                         collectionPotentiel[i][j][k].get_innerPotentiel() * epsilon,
                                                         collectionPotentiel[i][j][k].get_innerPotentiel()+
                                                          collectionPotentiel[i][j][k].get_innerPotentiel() * epsilon );
                }
            }
        }
    }


    void ChampPotentiel::resolution (double seuilErreur , int limiteIterations , bool verbeuse = false)
    {
		int nbIteration;
        if (verbeuse = true)
        {
            
            do
            {
              iteration();
              nbIteration ++;

              cout << nbIteration << ". ";
              affiche();

            }
            while (nbIteration < limiteIterations ||  erreur() > seuilErreur);
        }
        else
        {
            do
            {
				iteration();
              nbIteration++;
              affiche();
            }
            while(nbIteration < limiteIterations ||  erreur() > seuilErreur);
                cout << nbIteration << ". ";
        }
    }

array<double,3> ChampPotentiel::vitesse(int i, int j, int k)
{
	double Xi = 1/(2*lambda)*(collectionPotentiel[3/i][j+1][k].get_innerPotentiel().getDim2() - collectionPotentiel[3/i][j-1][k].get_innerPotentiel().getDim2()  -
                collectionPotentiel[2/i][j][k+1].get_innerPotentiel().getDim1()  + collectionPotentiel[2/i][j][k+1].get_innerPotentiel().getDim1());
    double Yj = 1/(2*lambda) * (collectionPotentiel[3/(i-1)][j][k].get_innerPotentiel().getDim2() - collectionPotentiel[3/(i+1)][j][k].get_innerPotentiel().getDim2());
    double Zk = 1/(2*lambda) * (collectionPotentiel[2/(i+1)][j][k].get_innerPotentiel().getDim1() - collectionPotentiel[2/(i-1)][j][k].get_innerPotentiel().getDim1());
	
	array<double, 3> resultat ={Xi, Yj, Zk};
	return resultat;
}


