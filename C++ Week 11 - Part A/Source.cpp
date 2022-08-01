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

// ********************
//      PROTOTYPES
// ********************

char character(char, int);

// ***********************
//      MAIN FUNCTION
// ***********************

int main() {
	char newChar;
	newChar = character('a', 2);
	cout << newChar;

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

	return char(end);
}