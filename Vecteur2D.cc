#include <iostream>
#include <cmath>
#include "Vecteur2D.h"
using namespace std;


void Vecteur2D::affiche() {cout <<dim1<<" "<<dim2<< endl;}
bool Vecteur2D::compare(Vecteur2D x)
    {
        if ((x.dim1==dim1) & (x.dim2==dim2))
            {
                cout <<"true"<<endl; return(true);
            }

        else
            {
                cout <<"false"<<endl; return (false);
            }
    } // opérateur compare




	/* en gros eric, le concept est d'utiliser une methode qui va etre applée en tant que caractéristique d'un type d'objet
   donc on va appeler la methode via la classe en prenant des arguments des objets externes: exemple pour
   l'addition on a : A.addition(D) qui va faire l'addition entre le vecteur A et le vecteur D c'est pareil que de faire D.addition(A);
   Si tu comprends pas reli ton cour !
   Dans chaque methodes les vecteurs hotes de la methodes (vecteurs que on va retourner) sont només des facon logique ex: somm.....
   */
	/*void affiche ()
{cout <<dim1<<" "<<dim2<< endl;};

	bool compare (Vecteur2D x)
{if ((x.dim1==dim1) & (x.dim2==dim2)) {cout <<"true"<<endl; return(true);}

else {cout <<"false"<<endl; return (false);};

};*/
    //opé addition
	Vecteur2D Vecteur2D::operator+(Vecteur2D autre) const
	{

		Vecteur2D somm;

		somm.dim1=dim1+autre.dim1;
		somm.dim2=dim2+autre.dim2;

		return somm;

	}
//opé soustraction
	Vecteur2D Vecteur2D::operator-(Vecteur2D autres) const
	{
		Vecteur2D sous;

	  sous.dim1=dim1-autres.dim1;
	  sous.dim2=dim2-autres.dim2;

	  return sous ;




	}
//opé opposé
	Vecteur2D Vecteur2D::operator-=(Vecteur2D opp) const
	{

		opp.dim1=-dim1;
		opp.dim2=-dim2;

		return opp;

	}
//opé prod par un scalaire
	Vecteur2D Vecteur2D::operator*(double x)
	{
		Vecteur2D mult;
		mult.dim1=dim1*x ;
		mult.dim2=dim2*x;

	return mult;

	}
//Opé normesquare
	Vecteur2D::operator++(double x)
	{



	x=dim1*dim1+dim2*dim2;

	return x;

	}

//opé norme
	Vecteur2D::operator|| (double x)
	{



	x=sqrt(dim1*dim1+dim2*dim2);

	return x;




	}
// opé prod scalaire
	Vecteur2D::operator->* (Vecteur2D autrev)
	{ double x;
	Vecteur2D v3;
	v3=addition(autrev);
		x=(1/2)*(autrev.normesquare()+normesquare()-v3.normesquare() );

	return x;


	}
};

double Vecteur2D :: getDim1() const { return dim1; }
double Vecteur2D :: getDim2() const { return dim2; }
void Vecteur2D :: setDim1(double x) { dim1 = x; }
void Vecteur2D :: setDim2(double y) { dim2 = y; }


/*le main sert juste a creer des test pour voir si la classe est bien faite
*/


int main()
{




	return 0;
} = 0.0, double dim2 = 0.0) : dim1(dim1b), dim2(dim2b) {} // constructeur vecteur nul par defaut + par coord cathé


void Vecteur2D affiche() {cout <<dim1<<" "<<dim2<< endl;} // opérateur affiche


bool Vecteur2D compare(Vecteur2D x)
    {
        if ((x.dim1==dim1) & (x.dim2==dim2))
            {
                cout <<"true"<<endl; return(true);
            }

        else
            {
                cout <<"false"<<endl; return (false);
            }
    } // opérateur compare




	/* en gros eric, le concept est d'utiliser une methode qui va etre applée en tant que caractéristique d'un type d'objet
   donc on va appeler la methode via la classe en prenant des arguments des objets externes: exemple pour
   l'addition on a : A.addition(D) qui va faire l'addition entre le vecteur A et le vecteur D c'est pareil que de faire D.addition(A);
   Si tu comprends pas reli ton cour !
   Dans chaque methodes les vecteurs hotes de la methodes (vecteurs que on va retourner) sont només des facon logique ex: somm.....
   */
	/*void affiche ()
{cout <<dim1<<" "<<dim2<< endl;};

	bool compare (Vecteur2D x)
{if ((x.dim1==dim1) & (x.dim2==dim2)) {cout <<"true"<<endl; return(true);}

else {cout <<"false"<<endl; return (false);};

};*/

	Vecteur2D Vecteur2D::operator addition(Vecteur2D autre) const
	{

		Vecteur2D somm;

		somm.dim1=dim1+autre.dim1;
		somm.dim2=dim2+autre.dim2;

		return somm;

	}

	Vecteur2D Vecteur2D::operator soustraction(Vecteur2D autres) const
	{
		Vecteur2D sous;

	  sous.dim1=dim1-autres.dim1;
	  sous.dim2=dim2-autres.dim2;

	  return sous ;




	}

	Vecteur2D Vecteur2D::operator oppose() const
	{
		Vecteur2D opp;
		opp.dim1=-dim1;
		opp.dim2=-dim2;

		return opp;

	}

	Vecteur2D Vecteur2D::operator multiscal (double x)
	{
		Vecteur2D mult;
		mult.dim1=dim1*x ;
		mult.dim2=dim2*x;

	return mult;

	}

	Vecteur2D::operator double normesquare ()
	{

	double x;

	x=dim1*dim1+dim2*dim2;

	return x;

	}

	Vecteur2D::operator double norme ()
	{

	double x;

	x=sqrt(dim1*dim1+dim2*dim2);

	return x;




	}

	Vecteur2D::operator double prodscal (Vecteur2D autrev)
	{ double x;
	Vecteur2D v3;
	v3=addition(autrev);
		x=(1/2)*(autrev.normesquare()+normesquare()-v3.normesquare() );

	return x;


	}
}

double Vecteur2D :: getDim1() const { return dim1; };
double Vecteur2D :: getDim2() const { return dim2; };
void Vecteur2D :: setDim1(double x) { dim1 = x; };
void Vecteur2D :: setDim2(double y) { dim2 = y; };



/*le main sert juste a creer des test pour voir si la classe est bien faite
*/


