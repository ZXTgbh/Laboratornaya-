#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	vector<int> vec;
	
	cout << "Enter numbers: \n";
	
	for (int i; cin.peek() != '0' && cin >> i;)
	{
		if (i == 0){
			break;
		}
		vec.push_back(i);
	}
	
	int sum = 0;
	for (int i = 0; i < vec.size(); i++)
	{
		sum += vec[i];
	}
	
	cout << "Amount = " << vec.size() << endl;
	cout << "Sum = " << sum << endl;
	cout << "Average = " << sum / vec.size() << "\n";
	system("pause");
	return 0;
}