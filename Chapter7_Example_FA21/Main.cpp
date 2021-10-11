#include <iostream>

using namespace std;

void AddCustomer();
void UpdateAccount();

int main()
{
	int menu_input = 0;
	bool loop = true;

	while (loop)
	{
		cout << "Customer information program.\nMenu options:\n";
		cout << "Enter 1 to add customer.\nEnter 2 to update account\nEnter 3 to exit.\n";

		cin >> menu_input;

		if (!cin)
		{
			cout << "Stream error, exiting program.\n";
			break;
		}

		switch (menu_input)
		{
		case 1:	AddCustomer();
			break;

		case 2:	UpdateAccount();
			break;

		case 3:	cout << "Exiting program.\n\n";
			loop = false;
			break;

		default:	cout << "Input Error, try again\n\n";
			break;
		}
	}

	return 0;
}

void AddCustomer()
{
	cout << "Customer added!\n\n";
}

void UpdateAccount()
{
	cout << "Account updated!\n\n";
}