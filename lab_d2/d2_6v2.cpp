#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num;
	cout << "Enter number: ";
	cin >> num;
	
	bool isPowerOfTwo = num && !(num & (num -1));
	
	if (isPowerOfTwo)
	{
		cout << log(num) / log(2) << endl;
	}
	else {
		cout << "Not power of two.";
	}
	return 0;
}