#pragma once
#include "Page2.cpp"

//Kelly Perez

using namespace std;

int main() {

	//Declaring variables
	float iInv = 0.0;    //First investment
	float mDep = 0.0;    //Monthly deposit
	float aInt = 0.0;    //Annual interest
	float mnts = 0.0;    //Months
	float yrs = 0.0;     //Years
	float tAmnt = 0.0;   //Total amount
	float iAmnt = 0.0;   //Interest amount
	float ytAmnt = 0.0;  //Yearly total amount

	//Functions pulled from the Bank class
	Bank objects;
	objects.printMenu();
	objects.printMenu2();
	objects.code();

	return 0;
}
	
