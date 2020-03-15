//---------------------------------------------------------
// file: receipt.cpp
//   by: Macie Ryan
//  org: COP 2001, spring 2020
//  for: calculating receipt total from inputted values 
//       and practicing spacing
//---------------------------------------------------------

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {		//start program

	const int RECEIPT_WIDTH = 25;
	string companyName = "Macy's Muffins";	//14 characters
	const float TAX_RATE = 6.5;

	const string DASHES = "-------------------------";		//25 dashes
	const string SPACES = "                         ";		//25 spaces

	float meal;
	float tax;
	float subtotal;
	float tip;
	float total;

	cout << "Enter meal cost: ";
	cin >> meal;
	cout << "Enter tip rate: ";
	cin >> tip;
	cout << endl;

	//math
	tax = (TAX_RATE / 100) * meal;
	subtotal = meal + tax;
	tip = (tip / 100) * subtotal;
	total = subtotal + tip;

	int numSpaces = (RECEIPT_WIDTH - companyName.length()) / 2;
	//use substring to do (0, numspaces then the company name)

	cout << (SPACES.substr(0, numSpaces)) << companyName << endl;
	cout << DASHES << endl;

	//displaying MEAL
	string tempStr = to_string(meal);
	int tempInt = RECEIPT_WIDTH - (tempStr.length() - 4);
	tempStr = "Meal:";
	tempInt -= tempStr.length();
	cout << tempStr << SPACES.substr(0, tempInt) << fixed << setprecision(2) << meal << endl;
	//displaying TAX
	tempStr = to_string(tax);
	tempInt = RECEIPT_WIDTH - (tempStr.length() - 4);
	tempStr = "Tax:";
	tempInt = tempInt - tempStr.length();
	cout << tempStr << SPACES.substr(0, tempInt) << fixed << setprecision(2) << tax << endl;
	
	cout << DASHES << endl;

	//displaying SUBTOTAL
	tempStr = to_string(subtotal);
	tempInt = RECEIPT_WIDTH - (tempStr.length() - 4);
	tempStr = "Subtotal:";
	tempInt = tempInt - tempStr.length();
	cout << tempStr << SPACES.substr(0, tempInt) << fixed << setprecision(2) << subtotal << endl;
	//displaying TIP
	tempStr = to_string(tip);
	tempInt = RECEIPT_WIDTH - (tempStr.length() - 4);
	tempStr = "Tip:";
	tempInt = tempInt - tempStr.length();
	cout << tempStr << SPACES.substr(0, tempInt) << fixed << setprecision(2) << tip << endl;

	cout << DASHES << endl;

	//displaying TOTAL
	tempStr = to_string(total);
	tempInt = RECEIPT_WIDTH - (tempStr.length() - 4);
	tempStr = "Total:";
	tempInt = tempInt - tempStr.length();
	cout << tempStr << SPACES.substr(0, tempInt) << fixed << setprecision(2) << total << endl;

	return 0;
}	//end program
