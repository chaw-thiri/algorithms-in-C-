#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void get_random(int);

int main() {

	srand((unsigned)time(NULL));

	get_random(1000000);
	return 0;
}
void get_random(int dice) {
	int arr[6] = {0, };
	int  result;
	double freq;
	cout.precision(2);
	for (int counter = 0; counter < dice; counter++) {
		result = (rand() % 6);
		arr[result] += 1;
	}
	for (int i = 0; i <= 5; i++) {
		cout << i +1 << " : " << arr[i] <<", ";
		freq = double(arr[i]) / 10000;
		cout << fixed;
		cout << freq << "%" << endl;
	}
		
}
