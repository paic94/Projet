#ifndef PRJ_VECTEUR_H
#define PRJ_VECTEUR_H


#include <iostream>
#include <cmath>


using namespace std;

class Vecteur2D : public  Dessinable {


private:
double dim1;
double dim2;

public:

Vecteur2D() : dim1(0.0),  dim2(0.0) {} // constructeur vecteur nul par defaut
Vecteur2D(double dim1b, double dim2b) : dim1(dim1b),  dim2(dim2b) {} // constructeur par coord carthé
string Vecteur2D::get_string() const

void affiche() /*{cout <<dim1<<" "<<dim2<< endl;}*/; // opérateur affiche


bool compare(Vecteur2D x); // opérateur compare


double getDim1() const;
double getDim2() const;
void setDim1(double x);
void setDim2(double y);


//------ADDITION------------------
Vecteur2D somme(Vecteur2D autre);
Vecteur2D operator+(Vecteur2D autre);
//------------------------------------



// opé soustraction
	Vecteur2D operator-(Vecteur2D autres) const;

// opé opposé
	Vecteur2D operator~();

// opé prod par un scalaire
	Vecteur2D operator*(double x);

// opé normesquare------------------
	double normeSquare();
//----------------------------------

// opé norme------------------------
	double norme();
//----------------------------------

//prod scalaire
	double operator^ (Vecteur2D autrev);
//-------------------------
};


#endif PRJ_VECTEUR_H
