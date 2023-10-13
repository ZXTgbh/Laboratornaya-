#include <iostream>

using namespace std;

int main()
{
	int n = 1;
	
	while(n < 10)
	{
	for(int i = (1); i < 11; i++)
	{
		cout << n << " * " << i << " = " << n * i << "\n" << endl;
	}
	n++;
	
	}
	
	return 0;
}