#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int num;
	bool isPrime = true;
	
	cout << "Enter number: \n";
	cin >> num;
	
	if (num == 0 || num == 1)
	{
		isPrime = false;
	}
	else{
		for (int i = 2; i <= num / 2; ++i){
			if(num % i == 0){
				isPrime = false;
				break;
			}
		}
	}
	
	if (isPrime){
		cout << num << " - PRIME NUMBER";
	}
	else{
		cout << num << " - NOT PRIME NUMBER";
	}

	return 0;
}