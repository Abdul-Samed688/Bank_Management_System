#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>

using namespace std;

// function declaration
void intro(); //introductory screen function


int main()
{
	char ch;
	int num;
	intro();

	do
	{
		system("cls");
		cout << "\n\n\n\t **MAIN MENU**\n";
		cout << "\t------------------";
		cout << "\n\n\t01. NEW ACCOUNT";
		cout << "\n\n\t02. DEPOSIT AMOUNT";
		cout << "\n\n\t03. WITHDRAW AMOUNT";
		cout << "\n\n\t04. BALANCE ENQUIRY";
		cout << "\n\n\t05. ALL ACCOUNT HOLDER LIST";
		cout << "\n\n\t06. CLOSE AN ACCOUNT";
		cout << "\n\n\t07. MODIFY AN ACCOUNT";
		cout << "\n\n\t08. EXIT";
		cout << "\n\n\tSelect Your Option (1-8) ";
		cin >> ch;
		system("cls");

		switch(ch)
		{
			case '1':
				break;
			case '2':
				break;
			case '3':
				break;
			case '4':
				break;
			case '5':
				break;
			case '6':
				break;
			case '7':
				break;
			case '8':
				cout << "\n\n\tThank you for using Bank Management System";
				break;
			default:cout << "\a";
		}
		
		cin.ignore();
		cin.get();
	} while (ch != '8');
	return 0;
}

// INTRODUCTION FUNCTIONS
void intro()
{
	cout << "\n\n\t====================";
		cout << "\n\t  ***BANK***";
	cout << "\n\n\t***MANAGEMENT***";
	cout << "\n\n\t  ***SYSTEM*** \n";
	cout << "\t====================";
	cout << "\n\n\n\n\t BY: ABDUL SAMED MANOR \n\n\n";
	cout << "\t Press Enter to continue...";
	cin.get();
}
