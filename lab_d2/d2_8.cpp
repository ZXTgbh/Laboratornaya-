#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2;
	cout << "Enter the first string: ";
	cin >> str1;
	cout << "Enter the second string: ";
	cin >> str2;
	
	str1.erase(remove(str1.begin(), str1.end(), ',.;:\'\\/!'));
	cout << str1 << endl;
	
	return 0;
}