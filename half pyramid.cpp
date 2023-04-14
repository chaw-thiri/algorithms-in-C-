#include <iostream>
using namespace std;
int main() {
	int num = 5;
	int i, j;
	for (i = 0; i < num; i += 1) // if = add here> extra empty line
	{
		for (j = 0; j <= i; j += 1)  // y only extends to the limit of x
		{
			cout << "*";
			//cout << j+1; // j will print 0 to 4, use +1 to print 1 to 5.
			//cout << char(int('A')+i);   A,BB,CCC,DDDD,EEEEE
			//cout << char(int('A')+j);   //A,AB,ABC,ABCD,ABCDE
		}
		cout << endl;

	}
	return 0;
}
//   0    1     2	3	4
//0 0,0
//1	1,0   1,1
//2	2,0   2,1  2,2
//3 3,0   3,1  3,2 3,3
//4 4,0   4,1  4,2 4,3 4,4
