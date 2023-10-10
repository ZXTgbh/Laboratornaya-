#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Number = ";
	cin >> n;
	if (n < 0)
	{
		cout << "Number less then zero.";
		return 0;
	}
	else if (n == 0)
	{
		cout << "The number is zero.";
		return 0;
	}
	else if (n > 0)
	{
		cout << "Number more then zero.";
	}
	return 0;
}