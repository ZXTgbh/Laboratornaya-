#include <iostream>

using namespace std;

void multiply(int num)
{
	for(int i = 1; i < 11; i++)
	{
		cout << num << " * " << i << " = " << num * i << endl;
	}
}

int main()
{
	int num = 5;
	multiply(num);
}