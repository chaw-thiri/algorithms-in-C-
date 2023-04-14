
#include <iostream>
using namespace std;
int main() {
	int num = 5;
	int i, j,space;
	for (i = 0; i <= num; i += 1)
	{
		for (space = num; space > i; space -= 1)
			cout << " ";
		for (j = 0; j < i; j += 1) 
			cout << "* ";
		
		
		cout << endl;
	}
	cout << endl;
	return 0;
}
