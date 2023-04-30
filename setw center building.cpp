#include <iostream>
#include <string>
#include <iomanip> // to use setw
#define LEFT (0)
#define RIGHT (1)
#define CENTER (2)
using namespace std;

// function prototypes
void formatttedCout(string, int, int);
void center(int, string);

int main() {
	formatttedCout("Hello Inha", LEFT, 80);
	formatttedCout("Welcome. SGCS Students!!!", CENTER, 80);
	formatttedCout("Welcome Korea", RIGHT, 80);
	return 0;
}

void formatttedCout(string str, int num, int space)
{	
	// if else is used as control statment to set the position
	if (num == LEFT)
		cout << left << setw(space) << str<< endl;
	else if (num == RIGHT)
		cout << right << setw(space) << str<< endl;
	else if (num == CENTER)
	{	
		
		center(space, str);
		cout << str << endl;

	}
		
}
void center(int space,string str) {
	/*
		* there is no center alignment in setw setting.
		* thus center setting is crafted manually.
		*/
	int frontPadding = (space - str.size()) / 2;   //number of spaces in front of the word
	string padding(frontPadding, ' ');
	cout << padding;
}
