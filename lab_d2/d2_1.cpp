#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Number = ";
	cin >> n;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			cout << "Not a prime number.";
			return 0;
		}
	}
	cout << "Prime number.";
	return 0;
}