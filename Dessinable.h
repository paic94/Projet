#ifndef PRJ_DESSINABLE_H
#define PRJ_DESSINABLE_H
#include <iostream>

using namespace std;


abstract class Dessinable
{
        public :

        virtual string Dessinable::get_string(){};

        void Dessinable::dessine () const {} // dessine est un virtuel pour la question 9.1
        ostream& Dessinable::operator<<(ostream& out, Dessinable objetDessinable) {}
};

// endif // PRJ_DESSINABLE_H
