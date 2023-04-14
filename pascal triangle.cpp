#include <iostream>
using namespace std;
int main() {
	int i, j, space;
	int num;
	int coef = 1;
	char alpha = 65;
	cout << "Input number of rows in the pyramid : ";
	cin >> num;
	for (i = 0; i <= num; i += 1) {
		for (space = num; space > i; space -= 1) {
			cout << " ";
		}
		for (j = 0; j <= i; j += 1) {

			if (j == 0 || i == 0)
				coef = 1;
			else
				coef = coef * (i - j + 1) / j;
			cout << coef;
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}
