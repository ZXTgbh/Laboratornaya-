#include <iostream>

using namespace std;

int main()
{
	char stn_usr_ans;
	bool check = true;
	cout << "Enter a letter from the list to calculate travel time(A, B, C, D, E): ";
	
	do{
	check = false;
	cin >> stn_usr_ans;
	
	
	
	switch(stn_usr_ans)
	{
		case 'a':
		case 'A':
		cout << "Station A:\nTravel time - 22 minutes.";
		break;
		
		case 'b':
		case 'B':
		cout << "Station B:\nTravel time - 31 minutes.";
		break;
		
		case 'c':
		case 'C':
		cout << "Station C:\nTravel time - 12 minutes.";
		break;
		
		case 'd':
		case 'D':
		cout << "Station D:\nTravel time - 45 minutes.";
		break;
		
		case 'e':
		case 'E':
		cout << "Station E:\nTravel time - 42 minutes.";
		break;
		
		default:
		cout << stn_usr_ans << " - INCORRECT INPUT!\nPlease try again.\n";
		check = true;
	}
	}while (check);
	
	return 0;
}