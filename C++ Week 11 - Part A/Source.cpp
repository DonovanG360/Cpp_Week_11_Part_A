// Donovan Green
// CIS 1202
// 7-31-2022
// Exceptions test

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
#include<string>
#include<cstring>
#include<cmath>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;

// ***************************
//      EXCEPTION CLASSES
// ***************************

class invalidCharacterException {};

class invalidRangeException {};

class caseConversionException {};

// ********************
//      PROTOTYPES
// ********************

char character(char, int);

// ***********************
//      MAIN FUNCTION
// ***********************

int main() {
	char newChar;
	char userChar;
	int userOffset;
	cout << "Character conversion:" << endl;
	cout << "\nPlease enter the starting character: "; cin >> userChar;
	cout << "Please enter the offset:             "; cin >> userOffset;
	try {
		newChar = character(userChar, userOffset);
		cout << "The new character is:                " << newChar << endl;
	}
	catch (invalidCharacterException) {
		cout << "Invalid Character Exception Thrown!" << endl;
	}
	catch (invalidRangeException) {
		cout << "Invalid Range Exception Thrown!" << endl;
	}
	catch (caseConversionException) {
		cout << "Case Conversion Exception Thrown!" << endl;
	}

	cout << "Thank you for using my program!";
	cout << "\n\n";
	system("pause");
	return 0;
}

// ****************************
//      CHARACTER FUNCTION
// ****************************

char character(char start, int offset) {
	int startAsciiValue = int(start);
	int end = startAsciiValue + offset;

	// checks for invalid characters
	if ((startAsciiValue > 90 && startAsciiValue < 97) || startAsciiValue > 122 || startAsciiValue < 65) {
		throw invalidCharacterException();
	}
	// checks if the end is now not an alpha character
	else if (((end > 90 && end < 97) || end > 122 || end < 65)) {
		throw invalidRangeException();
	}
	// checks if the case had been converted from lowercase to uppercase or vice versa
	else if ((startAsciiValue >= 65 && startAsciiValue <= 90 && end >= 97 && end <= 122) || (end >= 65 && end <= 90 && startAsciiValue >= 97 && startAsciiValue <= 122)) {
		throw caseConversionException();
	}

	return char(end);
}