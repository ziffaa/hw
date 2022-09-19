#include <iostream>
#include "date.h"

using namespace std;


int main()
{
	date x(12, 34, 64);
	date y(12, 34, 8);
	date z(12, 34, 8);
	
	cout << (x > y) << endl;
	cout << (x < y) << endl;
	cout << (z == y) << endl;
	cout << (z != y) << endl;
	cout << (x >= y) << endl;
	cout << (y <= z) << endl;
	x++;
	z = x - y;
	y += 12;
	x.printDate();
	cout << endl;
	z.printDate();
	cout << endl;
	y.printDate();
}
