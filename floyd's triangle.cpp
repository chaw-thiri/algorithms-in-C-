#include <iostream>
using namespace std;
int main() {
	int i, j, space;
	int num;
	int counter = 1;
	char alpha = 65;
	cout << "Input number of rows in the pyramid : ";
	cin >> num;
	for (i = 0; i <= num; i += 1) {
		for (space = num; space > i; space -= 1) {
			cout << "  ";
		}
		for (j = 0; j <= i; j += 1) {
			cout << counter;
			cout << "  ";
			counter++;
		}
		cout << endl;
	}
	return 0;
}
