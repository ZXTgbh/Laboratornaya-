#include <iostream>

using namespace std;

int main()
{
	int n = 1;
	int b = 100;
	int sum = 0;

	for(int i = n; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
		if (i % 2 == 0)
		{
			sum += i;
		}
	}

	cout << sum << endl;
	
	return 0;
}