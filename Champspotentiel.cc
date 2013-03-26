#include <iostream>
#include "Vecteur2D.cc"
#include "Montagne.cc"
#include "Potentiel.cc"
using namespace std;


class ChampPotentiel
{
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

    double ChampPotentiels::get_coordonneeX () const {return coordonneeX;} // on se sert de ces methodes pour le calcul_laplacien
    double ChampPotentiels::get_coordonneeY () const {return coordonneeY;}
    double ChampPotentiels::get_coordonneeZ () const {return coordonneeZ;}
    double ChampPotentiels::get_lambda () const {return lambda;}
    void ChampPotentiels::set_coordonneeX (double X)  {coordonneeX = X;}
    void ChampPotentiels::set_coordonneeY (double Y)  {coordonneeY = Y;}
    void ChampPotentiels::set_coordonneeZ (double Z)  {coordonneeZ = Z;}
    void ChampPotentiels::set_lambda (double l)  {lambda = l;}


    void ChampPotentiels::coordonnee (int BaseX, int BaseY, int BaseZ, double pas)
    {
        BaseX = nbCubeX;
        BaseY = nbCubeY;
        BaseZ = nbCubeZ;
        coordonneeX = BaseX*pas;
        coordonneeY = BaseY*pas;
        coordonneeZ = BaseZ*pas;

    }
    void ChampPotentiels::initialise(double v, Montagne M)
    {

        Vecteur2D p, lap;
        for (int i(0); i < nbCubeX; i++)
        {
            vector<vector<Potentiel>> vectorDimension2();
            for (int j(0); j < nbCubeY; j++)
            {
                vector<Potentiel> vectorDimension1();
                for (int k(0); k < nbCubeZ; k++)
                {
                    Potentiel pot;
                    if(pas*k > M.altitude(i*pas,(((j-(nbCubeY-1))/2)*pas))
                    {
                        pot = Potentiel(pas,j,k,v);
                    }
                    else{
                        pot =  Potentiel();
                    }
                    vectorDimension1.push_back(pot);
                }
                vectorDimension2.push_back(vectorDimension1);
            }
            collectionPotentiel.push_back(vectorDimension2);
        }

    }

 void ChampPotentiels::calcule_laplacien()
{
   Vecteur2D lap, u;
    for (int i(1); i < nbCubeX-1; i++)
        {
            for (int j(1); j < nbCubeY-1; j++)
            {
                for (int k(1); k < nbCubeZ-1; k++)
                {
                    collectionPotentiel set_lapl(collectionPotentiel[i-1][j][k].get_pot().get_coordonneeX() +
                                                 collectionPotentiel[i][j-1][k].get_pot().get_coordonneeX() +
                                                 collectionPotentiel[i][j][k-1].get_pot().get_coordonneeX() +
                                                 6*collectionPotentiel[i][j][k].get_pot().get_coordonneeX() +
                                                 collectionPotentiel[i+1][j][k].get_pot().get_coordonneeX() +
                                                 collectionPotentiel[i][j+1][k].get_pot().get_coordonneeX() +
                                                 collectionPotentiel[i][j][k+1].get_pot().get_coordonneeX(),

                                                 collectionPotentiel[i-1][j][k].get_pot().get_coordonneeY() +
                                                 collectionPotentiel[i][j-1][k].get_pot().get_coordonneeY() +
                                                 collectionPotentiel[i][j][k-1].get_pot().get_coordonneeY() +
                                                 6*collectionPotentiel[i][j][k].get_pot().get_coordonneeY() +
                                                 collectionPotentiel[i+1][j][k].get_pot().get_coordonneeY() +
                                                 collectionPotentiel[i][j+1][k].get_pot().get_coordonneeY() +
                                                 collectionPotentiel[i][j][k+1].get_pot().get_coordonneeY() );
                    }

                }
            }
        }
void ChampPotentiels::affiche(collectionPotentiel[][][]) {
	for (int i(1); i <= nbCubeX; ++i) {
		for ( int j(1); j<= nbCubeY; ++j) {
			for (int k(1); k<= nbCubeZ ; ++k) {
				cout << i << " " << j << " " << k << " "  << endl;
				cout << "Potentiel : x :" << collectionPotentiel[i][j][k].get_pot().get_coordonneeX() << endl;
				cout << "            y :" << collectionPotentiel[i][j][k].get_pot().get_coordonneeY() << endl;
				cout << "Laplacien : x :" << collectionPotentiel[i][j][k].get_lapl().get_coordonneeX() << endl;
				cout << "            y :" << collectionPotentiel[i][j][k].get_lapl().get_coordonneeY() << endl;


				} ;
				cout << " " << endl;
			}
		}
}

    double ChampPotentiels::erreur() const
    {
        double err(0);
         for (int i(1); i < nbCubeX; i++)
        {
            for (int j(1); j < nbCubeY; j++)
            {
                for (int k(1); k < nbCubeZ; k++)
                {
    err = err + collectionPotentiel[i][j][k].get_lapl().get_coordonneeX() * collectionPotentiel[i][j][k].get_lapl().get_coordonneeX() +
          collectionPotentiel[i][j][k].get_lapl().get_coordonneeY() * collectionPotentiel[i][j][k].get_lapl().get_coordonneeY();
                }
            }
        }
        return err;
    }
    void ChampPotentiels::iteration(double epsilon)
    {
        for (int i(1); i < nbCubeX-1; i++)
        {
            for (int j(1); j < nbCubeY-1; j++)
            {
                for (int k(1); k < nbCubeZ-1; k++)
                {
                    collectionPotentiel[i][j][k].set_pot(collectionPotentiel[i][j][k].get_pot().get_coordonneeX()+
                                                         epsilon * collectionPotentiel[i][j][k].get_pot().getcoordonneeY,
                                                         collectionPotentiel[i][j][k].get_pot().get_coordonneeY()+
                                                         epsilon * collectionPotentiel[i][j][k].get_pot().get_coordonneeX  );
                }
            }
        }
    }


    void ChampPotentiels::resolution (double seuilErreur , int limiteIterations , bool verbeuse = false)
    {
        if (verbeuse = true)
        {
            int nbIteration;
            do
            {
              iteration(epsilon);
              nbIteration = nbIteration + 1;

              cout << nbIteration << ". ";
              affiche(iteration);

            }
            while (nbIteration < limiteIteration ||  erreur() > seuilErreur);
        }
        else
        {
            do
            {
              iteration(epsilon);
              nbIteration = nbIteration + 1;
              affiche(iteration);
            }
            while(nbIteration < limiteIteration ||  erreur() > seuilErreur);
                cout << nbIteration << ". ";
        }
    }

array<double,3> ChampPotentiels::vitesse(int i, int j, int k)
{
    double Xi = 1/(2*lambda) * (collectionPotentiel[3/i][j+1][k].get_pot() - collectionPotentiel[3/i][j-1][k].get_pot()  -
                collectionPotentiel[2/i][j][k+1].get_pot()  + collectionPotentiel[2/i][j][k+1].get_pot());
    double Yj = 1/(2*lambda) * (collectionPotentiel[3/(i-1)][j][k].get_pot() - collectionPotentiel[3/(i+1)][j][k].get_pot())
    double Zk = 1/(2*lambda) * (collectionPotentiel[2/(i+1)][j][k].get_pot() - collectionPotentiel[2/(i-1)][j][k].get_pot())

    return array[Xi, Yj, Zk];
}


};





int main()
{

    return 0;
}
