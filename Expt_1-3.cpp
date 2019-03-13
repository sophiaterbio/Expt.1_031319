#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double netBalance;
	int d1; //Number of days of billing cycle.
	int d2; //Number of days payment is made before billing cycle.
	double payment;
	double averageDailyBalance;
	double interest;
	double interestRate;

	cout << "Enter the net balance:"; //Output
	cin >> netBalance; //Input
	cout << endl; //Output

	cout << "Enter the number of days of the billing cycle:"; //Output
	cin >> d1; //Input
	cout << endl; //Output

	cout << "Enter the number of days payment is made before billing cycle:"; //Output
	cin >> d2; //Input
	cout << endl; //Output

	cout << "Enter the payment made:"; //Output
	cin >> payment; //Input
	cout << endl; //Output

	cout << "The average daily balance is: " << ((netBalance * d1 - payment * d2) / d1) << endl; //Output
	cin >> averageDailyBalance; //Input
	cout << endl;

	cout << "Enter intrest rate: ";
	cin >> interestRate;
	cout << endl;

	cout << "The interest is: " << averageDailyBalance * 0.0152 << endl; //Output
	cin >> interest; //Input
	cout << endl; //Input

	_getch();
	return 0;

}

