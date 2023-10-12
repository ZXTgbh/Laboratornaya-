#include <iostream>

using namespace std;


int main()
{
	int num = 10;
	int count, res;
	
	res = 1;
	
	for (count = 1; count <= num; count++)
	{
		res = res * count;
	}
	cout << res;
	return 0;
}