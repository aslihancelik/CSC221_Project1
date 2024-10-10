// CSC221_Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//
//
//
//Programmer: Aslihan Celik
//Date: 10/10/2024

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double monthlySales, advancedPay;
	double commissionRate = 0;
	double commission = 0;
	double remainingPay = 0;

	cout << "Enter the salesperson's monthly sales: " << endl;
	cin >> monthlySales;
	cout << "Enter the amount of advanced pay for this salesperson: " << endl;
	cin >> advancedPay;

	//If monthly sales negative enter again
	
	if (monthlySales < 0) {
		do {
			cout << "Monthly sales can not be a negative number. Please enter again" << endl;
			cin >> monthlySales;
		} while (monthlySales < 0);
	}

	//If advanced pay is negative or more than $1,500 enter again

	if (advancedPay < 0 || advancedPay > 1500) {
		do {
			cout << "Advanced can be a value between 0 and 1500. PLease enter again." << endl;
			cin >> advancedPay;

		} while (advancedPay < 0 || advancedPay > 1500);

	}

	cout << "Salesperson's monthly sales: ";
	cout << monthlySales << endl;
	cout << "The amount of advanced pay for this salesperson: ";
	cout << advancedPay << endl << endl;


	if (monthlySales < 10000) {

		commissionRate = 0.05;
		commission = monthlySales * commissionRate;

	}else if(monthlySales >= 10000 && monthlySales < 14999){

		commissionRate = 0.1;
		commission = monthlySales * commissionRate;
	}
	else if(monthlySales >= 15000 && monthlySales < 17999){
		commissionRate = 0.12;
		commission = monthlySales * commissionRate;
	}
	else if(monthlySales >= 18000 && monthlySales < 21999)
	{ 
		commissionRate = 0.14;
		commission = monthlySales * commissionRate;
	}
	else if (monthlySales > 22000) {

		commissionRate = 0.16;
		commission = monthlySales * commissionRate;

	}

	if (advancedPay > 0) {

		 remainingPay = commission - advancedPay;
	}

	cout << fixed << setprecision(2);
	cout << "Pay Results" << endl;
	cout << "Sales: $" << monthlySales << endl;
	cout << "Commission Rate: $" << commissionRate << endl;
	cout << "Commission: $" << commission << endl;
	cout << "Advanced Pay: $" << advancedPay << endl;
	cout << "Remaining Pay: $" << remainingPay << endl;

	if (remainingPay < 0) {
		cout << "Salesperson need to pay back $" << remainingPay * (-1) << "." << endl;
	}

	return 0;
}

