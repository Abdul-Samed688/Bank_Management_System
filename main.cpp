#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{
	char ch;
	int num;

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
		
		cin.ignore();
		cin.get();
	} while (ch != '8');
	return 0;
}
