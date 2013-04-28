#include <iostream>
#include "Dessinable.h"
using namespace std;

ostream& operator<<(ostream& out, Dessinable const &objetDessinable)
{
    objetDessinable.dessine(out);
    return out;
}



