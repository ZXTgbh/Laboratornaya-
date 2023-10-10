#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter number: ";
	cin >> num;
	if (num && !(num & (num -1)))
	{
		cout << "YES";
		return 0;
	}
	else{
		cout << "NO";
	}
	return 0;
}