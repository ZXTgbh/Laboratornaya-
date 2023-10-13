#include <iostream>

using namespace std;

int main()
{
	for(int i = (2); i < 30; i += 2)
	{
		cout << i << " - Even number\n" << endl;
	}
	
	for(int i = (0); i < 30; i++)
	{
		if (i % 2 != 0)
		{
		cout << i << " - Odd number\n" << endl;
		}
	}
	
	return 0;
}