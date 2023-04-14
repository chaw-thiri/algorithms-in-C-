#include <iostream>
using namespace std;
int main() {
	int i, j, space;
	int num;
	char alpha = 65;
	cout << "Input number of rows in the pyramid : ";
	cin >> num;
	for (i = 0; i <= num; i += 1) {
		for (space = num; space > i; space -= 1) {
			cout << " ";
		}
		for (j = 0; j <= i; j += 1) {
			//cout << "* ";
			//cout << j + 1<< " ";
			cout << char(int(alpha) + i);
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}
