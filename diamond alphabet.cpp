#include <iostream>
using namespace std;
int main() {
	int i, j=0,space;
	int num2;
	cout << "Type an  odd number for the number of rows : ";
	cin >> num2;
	int num = (num2 + 1) / 2; // the algorithm modify the number by itsef
	//, to mitigate it, the number is filtered here
	char alpha = 'A';
	for (i = 1; i <= num; i++) 
	{
		for (space = num; space >= i; space -= 1) {
			cout << "  ";
		}
		while (j < (i)* 2 - 1) // odd number  check
		{
			cout << char(alpha+i-1) << " ";
			j++;
		}
		j = 0;
		cout << endl;
	}
	for (i = 1; i <= num; i++) {
		for (space = 0; space <= i; space += 1)  // same as regular triangles
		{
			cout << "  ";
		}
		while (j < (num-i) * 2 - 1)  // begin with the odd number after the first for loop.
		{
			cout << char(alpha+num+i-1) << " "; // to get increasingly larger alphabets
			j++;
		}
		j = 0;
		cout << endl;
	}
	
	return 0;
}
