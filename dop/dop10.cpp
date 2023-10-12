#include <iostream>

using namespace std;

int main()
{
	int num;
	
	cout << "Enter number: " << endl;
	cin >> num;
	
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			cout << i << " - divisor of " << num << endl;
		}
	}
	return 0;
}