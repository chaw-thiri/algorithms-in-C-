//time - O(n)  | space = O(1)
#include <iostream>
using namespace std;
int FibonacciNum(void);
int main() {
	for (int n = 2; n < 20; n += 1) {
		cout << FibonacciNum() << endl;

	}
	return 0;
}
int FibonacciNum() {
	static int fiboZero = 0, fiboOne = 1, counter = 0;
	int currentFibo;
	if (counter < 1) {
		cout << fiboZero << endl;
		cout << fiboOne << endl;
		counter++;
	}
	currentFibo = fiboZero + fiboOne;
	fiboZero = fiboOne;
	fiboOne = currentFibo;
	return currentFibo;

}
