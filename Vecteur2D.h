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
Vecteur2D(double dim1b, double dim2b) : dim1(dim1b),  dim2(dim2b) {} // constructeur par coord carth�

void affiche() /*{cout <<dim1<<" "<<dim2<< endl;}*/; // op�rateur affiche


bool compare(Vecteur2D x); // op�rateur compare


double getDim1() const;
double getDim2() const;
void setDim1(double x);
void setDim2(double y);

	/* en gros eric, le concept est d'utiliser une methode qui va etre appl�e en tant que caract�ristique d'un type d'objet
   donc on va appeler la methode via la classe en prenant des arguments des objets externes: exemple pour
   l'addition on a : A.addition(D) qui va faire l'addition entre le vecteur A et le vecteur D c'est pareil que de faire D.addition(A);
   Si tu comprends pas reli ton cour !
   Dans chaque methodes les vecteurs hotes de la methodes (vecteurs que on va retourner) sont nom�s des facon logique ex: somm.....
   */

   //op� addition
Vecteur2D operator+(Vecteur2D autre);

// op� soustraction
	Vecteur2D operator-(Vecteur2D autres) const;

// op� oppos�
	Vecteur2D operator~();

// op� prod par un scalaire
	Vecteur2D operator*(double x);

// op� normesquare
	double operator++(double x);

// op� norme
	double operator|| (double x);

//prod scalaire
	double operator->* (Vecteur2D autrev);
};


#endif PRJ_VECTEUR_H
