#ifndef PRJ_VECTEUR_H
#define PRJ_VECTEUR_H
#include <iostream>
#include <cmath>


using namespace std;

class Vecteur2D  {
private:
double dim1;
double dim2;

public:


Vecteur2D() : dim1(0.0),  dim2(0.0) {} // constructeur vecteur nul par defaut
Vecteur2D(double dim1b, double dim2b) : dim1(dim1b),  dim2(dim2b) {} // constructeur par coord carthé

void affiche() /*{cout <<dim1<<" "<<dim2<< endl;}*/; // opérateur affiche


bool compare(Vecteur2D x); // opérateur compare


double getDim1() const;
double getDim2() const;
void setDim1(double x);
void setDim2(double y);

	/* en gros eric, le concept est d'utiliser une methode qui va etre applée en tant que caractéristique d'un type d'objet
   donc on va appeler la methode via la classe en prenant des arguments des objets externes: exemple pour
   l'addition on a : A.addition(D) qui va faire l'addition entre le vecteur A et le vecteur D c'est pareil que de faire D.addition(A);
   Si tu comprends pas reli ton cour !
   Dans chaque methodes les vecteurs hotes de la methodes (vecteurs que on va retourner) sont només des facon logique ex: somm.....
   */

   //opé addition
Vecteur2D operator+(Vecteur2D autre);

// opé soustraction
	Vecteur2D operator-(Vecteur2D autres) const;

// opé opposé
	Vecteur2D operator~();

// opé prod par un scalaire
	Vecteur2D operator*(double x);

// opé normesquare
	double operator++(double x);

// opé norme
	double operator|| (double x);

//prod scalaire
	double operator->* (Vecteur2D autrev);
};


#endif PRJ_VECTEUR_H
