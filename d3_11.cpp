#include <iostream>

using namespace std;

long long factorial(long n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	return n * factorial(n - 1);
}

int main ()
{
	long long p = 1;
	for (int i = 1; i <= 10; ++i){
		p *= factorial(i);
	}
	
	cout << p << endl;
	
	return 0;
}