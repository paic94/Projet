#include <iostream>
#include "Dessinable.h"
using namespace std;

ostream& operator<<(ostream& out, Dessinable objetDessinable)
{
    objetDessinable.dessine(out);
    return out;
}



int main()
{
    return 0;
}
