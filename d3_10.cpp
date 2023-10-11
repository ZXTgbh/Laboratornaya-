#include <iostream>

using namespace std;

int main ()
{
	float rubles, x, y;
	int years;
	cout << "Enter rubles: \n";
	cin >> rubles;
	cout << "Enter years: ";
	cin >> years;
	
	x = rubles * 3 / 100;
	y = rubles + x * years;
	
	cout << "Amount after " << years << " = " << y << endl;
	
	return 0;
}