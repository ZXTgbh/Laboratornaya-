#include <iostream>

using namespace std;

int main()
{
	int num1, num2, mult, usr_ans;
	
	
	cout << "Enter first number: " << endl;
	cin >> num1;
	cout << "Enter second number: " << endl;
	cin >> num2;
	
	mult = num1 * num2;
	
	cout << "Multiply the first number by the second: " << endl;
	cin >> usr_ans;
	
	if (mult == usr_ans)
	{
		cout << "You answer is CORRECT.";
	}
	else {
		cout << "You answer is INCORRECT.\n" << "Correct answer - " << mult << endl;
	}
	
	return 0;
}