#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Enter year: ";
	cin >> year;
	if (year % 100 == 0)
	{
		cout << "YES";
		return 0;
	}
	else{
		cout << "NO";
	}
	return 0;
}