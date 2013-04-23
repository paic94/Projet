#include <iostream>
#include "Dessinable.h"
using namespace std;

ostream& operator<<(ostream& out, Dessinable objetDessinable)
{
    out << Dessinable::dessine(out);
    return out;
}



int main()
{
    return 0;
}
