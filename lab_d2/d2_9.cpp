#include <iostream>
using namespace std;

int main()
{
	long double num;
	cout << "Enter number: ";
	cin >> num;
	
	long double sum = 0;
	
	for (unsigned long int i = 1; i < num; i++)
	{
		if (num / i  == int (num / i))
		{
			sum += i;
		}
	}
	
	if (sum == num)
	{
		cout << "It's perfect number." << endl;
		system("pause");
		return 0;
	}
	else{
		cout << "NOT a perfect number." << endl;
	}
	system("pause");
	return 0;
}