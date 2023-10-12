#include <iostream>

using namespace std;

int main()
{
	int a = 1, b = 0, k, num = 10;

	for (int i = 1; i <= num; i++)
	{
		k = a + b;
		a = b;
		b = k;
		cout << k << endl;
	}
	return 0;
}