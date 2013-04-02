#include <iostream>
#include "Dessinable.h"
using namespace std;

virtual void Dessinable::dessine () const
{
    cout << 'A' << endl;
}

int main()
{
    return 0;
}
