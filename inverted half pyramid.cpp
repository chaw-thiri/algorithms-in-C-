// reverse x algo in pyramid to get inverse pyramid
#include <iostream>
using namespace std;
int main() {
	int num = 5;
	int x, y;
	for (x = num; x > 0; x -= 1) // x= number of * in a row , number of columns
	{
		for (y = 0; y < x; y += 1)  // y only extends to the limit of x
		{
			//cout << "*";
			//cout << y + 1; 
		}
		cout << endl;

	}
	return 0;
}
