#include <iostream>
#include <cstring>
using namespace std;

bool palindrom_check (string word)
	{
		int len = word.length();
		for (int i = 0; i < len / 2; ++i)
		{
			if (word[i] != word[len-i-1])
			{
				return false;
			}
		}
		return true;
	}

int main()
{
	string str;
	cout << "Enter the palindrom: ";
	cin >> str;
	
	if (palindrom_check(str))
	{
		cout << "It's a palindrom.";
		return 0;
	}
	else{
		cout << "It's not palindrom.";
	}
	return 0;
}