#include <iostream>
#include <string> // to use string 
const int MAX_SIZE = 100; // for the length of the array
using namespace std;


void countInt(int, int=10, string="\n"); // the second and third varaible will serve as default values 
int main() {
	// coutInt (value, base, end_string)
	countInt(128);
	countInt(128, 10, " ");
	countInt(128, 10);
	countInt(128, 8, ", ");
	countInt(128, 8);
	countInt(128, 16);

	return 0;
}
void countInt(int num, int base, string end_str) {
	int remainder;
	static int counter = 0; // since we cannot know the length of the FinalNum array, counter is required to know up to which index our remainder used.
	static int FinalNum[MAX_SIZE];
	// finding the number
	if (num > base)  // if the number goes below the base, it will become the last remainder

	{
		remainder = num % base;
		FinalNum[counter] = remainder;
		counter++;
		countInt(num / base, base, end_str);
	}
	else {
		remainder = num;
		FinalNum[counter] = remainder;

		// print out the array in reversed order
		for (int i = counter; i >= 0; --i)
		{
			cout << FinalNum[i];

		}
		counter = 0; // restart the counter after one main call is done.
		cout << end_str;
	}

	
		
}
