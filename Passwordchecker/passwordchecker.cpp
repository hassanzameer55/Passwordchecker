#include<iostream>
#include<string>
using namespace std;
int main() {
	string password;
	int lowercase = 0, uppercase = 0, digits = 0, symbols = 0, spaces = 0;
	cout << "Welocme to password checker website " << endl;
	cout << "Enter your password : ";
	getline(cin, password);
	if (password.size() >= 8)
	{
		for (int i = 0; i <= password.size();i++)
		{
			if (isalpha(password[i]))
			{
				if (isupper(password[i]))
				{
					uppercase++;
				}
				if (islower(password[i]))
				{
					lowercase++;
				}
			}
			else if (isdigit(password[i]))
			{
				digits++;
			}
			else
			{
				symbols++;
			}
			if (password[i] == ' ')
			{
				spaces++;
			}
		}
	}
	if (password.size() >= 8)
	{
		if (uppercase < 2)
		{
			cout << "\nAt least 2 upper case letters";
		}
		if (lowercase < 2)
		{
			cout << "\nAt least 2 lower case letters";
		}
		if (digits < 2)
		{
			cout << "\nAt least 2 digits ";
		}
		if (symbols < 2)
		{
			cout << "\nAt least 2 symbols";
		}
		if (spaces != 0)
		{
			cout << "\nSpaces are not allowed";
		}
	}
	else
	{
		cout << "Sorry password must be at least 8 characters";
	}
	if (lowercase >= 2 && uppercase >= 2 && digits >= 2 && symbols >= 2 && spaces == 0)
	{
		cout << "Your password is set and password is " << password;
	}
}