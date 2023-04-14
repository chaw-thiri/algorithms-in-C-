#include <iostream>
#include<iomanip>
using namespace std;
int main() {
	int i, j;
	int num = 8;
	cout << setfill('0');
	cout << "========================Multiplication Table============================\n";
	for (i = 1; i <= 9; i++) {
		for (j = 2; j <= 9; j++) {
			cout << setw(2)<<j;
			cout << "x";
			cout << setw(2)<<i;
			cout << "=";
			cout << setw(2)<<i * j;
			cout << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "========================================================================\n";
}
