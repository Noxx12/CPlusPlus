#pragma once
#include <iostream>
#include <iomanip>

using namespace std;
// Bank class
class Bank {
public:
	void printMenu() {
		//Display menu 
		cout << "**********************************" << endl;
		cout << "*********** Data Input ***********" << endl;
		cout << "Initial Investment Amount: " << endl;
		cout << "Monthly Deposit: " << endl;
		cout << "Annual Interest: " << endl;
		cout << "Number of years: " << endl;

		//Press any key to continue
		system("PAUSE");

		//Get user input
		cout << "**********************************" << endl;
		cout << "*********** Data Input ***********" << endl;
		cout << "Initial Investment Amount: $" << endl;
		cin >> iInv;
		cout << "Monthly Deposit: $" << endl;
		cin >> mDep;
		cout << "Annual Interest: %" << endl;
		cin >> aInt;
		cout << "Number of years: " << endl;
		cin >> yrs;
		mnts = yrs * 12;

		system("PAUSE");

	}
	void printMenu2() {
		//Total amount of first investment
		tAmnt = iInv;

		//Year end data for no monthly deposits
		cout << endl << "Balance and Interest Without Additional Monthly Deposits" << endl;
		cout << "================================================================" << endl;
		cout << "Year          Year End Balance          Year End Earned Interest" << endl;
		cout << "----------------------------------------------------------------" << endl;

		//Yearly interest and year total
		for (int i = 0; i < yrs; i++) {
			//Yearly interest amount
			iAmnt = ((tAmnt) * (aInt / 100));

			//Year end total
			tAmnt = tAmnt + iAmnt;

			//Show dollar amount with set precision to 2 decimal places
			cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << tAmnt << "\t\t\t$" << iAmnt << endl;
		}

		//Monthly interest and monthly total
		iAmnt = iInv;

		//Year end deposits
		cout << endl << "Balance and Interest With Additional Monthly Deposits" << endl;
		cout << "================================================================" << endl;
		cout << "Year          Year End Balance          Year End Earned Interest" << endl;
		cout << "----------------------------------------------------------------" << endl;

		}
	void code() {
		for (int i = 0; i < yrs; i++) {
			//Set yearly interest to 0
			ytAmnt = 0;

			for (int j = 0; j < 12; j++) {
				//Monthly interest amount
				iAmnt = (((tAmnt + mDep) * (aInt / 100)) / 12);

				//Month end interest
				ytAmnt = ytAmnt + iAmnt;

				//Month end total
				tAmnt = tAmnt + mDep + iAmnt;
			}

			cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << tAmnt << "\t\t\t$" << ytAmnt << endl;
		}

	}
		
		//Variables
		float iInv = 0.0;    //First investment
		float mDep = 0.0;    //Monthly deposit
		float aInt = 0.0;    //Annual interest
		float mnts = 0.0;    //Months
		float yrs = 0.0;     //Years
		float tAmnt = 0.0;   //Total amount
		float iAmnt = 0.0;   //Interest amount
		float ytAmnt = 0.0;  //Yearly total amount
	
};
