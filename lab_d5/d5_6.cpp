#include <iostream>

using namespace std;

int main()
{
	int a = 1;
	int b = 0;
	int k;
	int num = 10;

	for(int i = 1; i <= num; i++)
	{
		k = a + b;
		a = b;
		b = k;
		cout << k << endl;
	}

	
	return 0;
}