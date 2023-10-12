#include <iostream>
#include <string>

using namespace std;

int main()
{
	string mon, tue, wed, thu, fri, sat, sun;
	int num;
	
	cout << "Enter your schedule for monday: " << endl;
	getline(cin, mon);
	
	cout << "Enter your schedule for tuesday: " << endl;
	getline(cin, tue);
	
	cout << "Enter your schedule for wednesday: " << endl;
	getline(cin, wed);
	
	cout << "Enter your schedule for thursday: " << endl;
	getline(cin, thu);
	
	cout << "Enter your schedule for friday: " << endl;
	getline(cin, fri);
	
	cout << "Enter your schedule for saturday: " << endl;
	getline(cin, sat);
	
	cout << "Enter your schedule for sunday: " << endl;
	getline(cin, sun);
	
	cout << "Enter day of the week(1-7): " << endl;
	cin >> num;
	
	if (num == 1)
	{
		cout << mon << endl;
	}
	else if (num == 2)
	{
		cout << tue << endl;
	}
	else if (num == 3)
	{
		cout << wed << endl;
	}
	else if (num == 4)
	{
		cout << thu << endl;
	}
	else if (num == 5)
	{
		cout << fri << endl;
	}
	else if (num == 6)
	{
		cout << sat << endl;
	}
	else if (num == 7)
	{
		cout << sun << endl;
	}
	
	return 0;
}