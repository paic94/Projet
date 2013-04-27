#include <iostream>
#include <cmath>
#include "Vecteur2D.h"


using namespace std;

void Vecteur2D::affiche()
{
	cout <<dim1<<" "<<dim2<< endl;
}

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



Vecteur2D Vecteur2D::somme(Vecteur2D autre)
{
	return Vecteur2D(dim1 + autre.dim1 , dim2 + autre.dim2);
}

//opé addition
Vecteur2D Vecteur2D::operator+(Vecteur2D autre)
{
	return somme(autre);
}

double Vecteur2D::normeSquare()
{
	return dim1*dim1 + dim2*dim2;
}

double Vecteur2D::norme()
{
	return sqrt(normeSquare());
}


//opé soustraction
Vecteur2D Vecteur2D::operator- (Vecteur2D autres) 
{
	Vecteur2D sous;

	sous.dim1=dim1-autres.dim1;
	sous.dim2=dim2-autres.dim2;

	return sous ;
}

// Opposé d'un vecteur
Vecteur2D Vecteur2D::operator~()
{
	return Vecteur2D(-1*dim1 , -1*dim2);
}


//opé prod par un scalaire
Vecteur2D Vecteur2D::operator*(double x)
{
	Vecteur2D mult;
	mult.dim1 = dim1*x ;
	mult.dim2 = dim2*x;
	return mult;

}


// opé prod scalaire
double Vecteur2D::operator^ (Vecteur2D autrev)
{
	return (dim1*autrev.dim1+ dim2 * autrev.dim2);
}


double Vecteur2D :: getDim1() const { return dim1; }
double Vecteur2D :: getDim2() const { return dim2; }
void Vecteur2D :: setDim1(double x) { dim1 = x; }
void Vecteur2D :: setDim2(double y) { dim2 = y; }
