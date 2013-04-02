#include <iostream>
#include "Dessinable.h"
using namespace std;





void Dessinable::dessine () const
{
    string aAfficher = get_string();
    cout << aAfficher << endl;
}

ostream& Dessinable::operator<<(ostream& out, Dessinable objetDessinable)
{
    out << objetDessinable.get_string();
    return out;
}



int main()
{
    return 0;
}
