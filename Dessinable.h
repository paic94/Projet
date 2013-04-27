#ifndef PRJ_DESSINABLE_H
#define PRJ_DESSINABLE_H
#include <iostream>

using namespace std;


class Dessinable
{
        public :

        virtual void dessine (ostream& out) const = 0; // dessine est une virtuelle pure pour la question 9.1

};

#endif PRJ_DESSINABLE_H
