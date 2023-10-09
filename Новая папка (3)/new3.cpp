#include <iostream>
using namespace std;

int main()
{
	int sum;
	cout << "Start of range: " ;
	int start;
	cin >> start;
	cout << "End of range: " ;
	int end;
	cin >> end;
	
	for (start; start <= end; start++)
	{
		if (start % 2 == 0)
		{
			sum += start;
		}
	}
	cout << "Summ = " << sum;
	return 0;
}