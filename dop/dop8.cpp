#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			cout << i << " - Multiples of 3" << endl;
		}
		if (i % 5 == 0)
		{
			cout << i << " - Multiples of 5" << endl;
		}
	}
	return 0;
}