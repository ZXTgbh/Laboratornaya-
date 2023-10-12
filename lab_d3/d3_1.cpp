#include <iostream>

using namespace std;

int main()
{
	int age = 0;
	int max_age = 0;
	int min_age = 10000;
	int average = 0;
	int sum = 0;
	int amount = 0;
	
	cout << "Enter the number of gym visitors: ";
	cin >> amount;
	
	for (int i = 0; i < amount; i++)
	{
		cout << "Enter age of " << i + 1 << "'th visitor: ";
		cin >> age;
		
		if (age < min_age)
		{
			min_age = age;
		}
		
		if (age > max_age)
		{
			max_age = age;
		}
	
		sum += age;
	}
	
	average = sum / amount;
	
	cout << "Average age of all visitors: " << average << endl;
	cout << "Age of the youngest visitor: " << min_age << endl;
	cout << "Age of the oldest visitor: " << max_age << endl;
	
	return 0;
}