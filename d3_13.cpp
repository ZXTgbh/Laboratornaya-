#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
	int height;
	cout << "Height: \n";
	cin >> height;
	
	
	for (int i = 0; i < height; ++i)
	{
		cout << setw(height + i)<< string(i * 2 + 1, '*') << endl;
	}
	
	system("pause");
	return 0;
}