#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter number: ";
	cin >> num;
	if (num % 3 == 0 && num % 5 == 0)
	{
		cout << "Number is a multiple of 3 and 5.";
		return 0;
	}
	else{
		cout << "NOT a multiple of 3 and 5.";
	}
	return 0;
}