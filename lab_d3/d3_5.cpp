#include <iostream>
#include <string>

using namespace std;

int main()
{
	int fingerNum;
	bool check = true;
	string thumb = "Thumb";
	string index = "Index finger";
	string middle = "Middle finger";
	string ring = "Ring finger";
	string baby = "Baby finger";
	
	cout << "Enter finger number: " << endl;
	
	do{
	check = false;
	cin >> fingerNum;
	
	
	if (fingerNum == 1 || fingerNum == 10)
	{
		cout << "It is a " << thumb << endl;
	}	
	else if (fingerNum == 2 || fingerNum == 9)
	{
		cout << "It is a " << index << endl;
	}
	else if (fingerNum == 3 || fingerNum == 8)
	{
		cout << "It is a " << middle << endl;
	}
	else if (fingerNum == 4 || fingerNum == 7)
	{
		cout << "It is a " << ring << endl;
	}
	else if (fingerNum == 5 || fingerNum == 6)
	{
		cout << "It is a " << baby << endl;
	}	
	else
	{
		cout << fingerNum << " - INCORRECT INPUT!\nPlease try again.\n";
		check = true;
	}
	}while (check);
	
	
	return 0;
}