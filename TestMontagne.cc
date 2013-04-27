#include "Montagne.h"

using namespace std;

int main (){

ofstream test;
test.open("montagne.dat");
	for(int sx(1); sx<=29 ; sx++){
		for(int sy(1); sy<= 29; sy++){
			test << sx << "  " << sy << "  "<< altitude(sx, sy) << endl;
			//cout << sx << "  " << sy << "  "<< result << endl;
			}
		//cout << endl;
		test << endl;
		}
test.close();


return 0;}
