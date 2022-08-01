// Donovan Green
// CIS 1202
// 7-31-2022


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

// ********************
//      PROTOTYPES
// ********************

char character(char, int);

// ***********************
//      MAIN FUNCTION
// ***********************

int main() {
	char newChar;
	try {
		newChar = character('a', 2);
		cout << newChar << endl;
	}
	catch (invalidCharacterException) {
		cout << "Invalid Character Exception Thrown!" << endl;
	}
	catch (invalidRangeException) {
		cout << "Invalid Range Exception Thrown!" << endl;
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
	if ((startAsciiValue > 90 && startAsciiValue < 97) || startAsciiValue > 122 || startAsciiValue < 65) {
		throw invalidCharacterException();
	}


	return char(end);
}