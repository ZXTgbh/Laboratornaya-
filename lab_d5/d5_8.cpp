#include <iostream>
using namespace std;

int main()
{
	int height;
	cout << "Height: \n";
	cin >> height;
	
	int t_width = height * 2 - 1;
	int b_width = height * 4 - 3;
	
	for(int i = 0; i < height; i++)
	{
		for(int j = 0; j < (b_width - t_width) / 2; j++)
		{
			cout << " ";
		}
		
		for(int j = 0; j < t_width; j++)
		{
			cout << "*";
		}
		cout << endl;
		t_width += 2;
	}
	
	cout << "\n\n";
	
	for(int i = 0; i < height; i++)
	{
		for(int j = 0; j < height; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	
	return 0;
}