// 1,2,3,4,5 pattern
#include <iostream>
using namespace std;
int main() {
	int i, j, space;
	int num = 5;
	for (i = 0; i < num; i += 1) {
		for (space=0; space < i; space += 1) // don't add equal in second loop, you will start with two spaces then
			cout << " ";
		for (j = num; j > i; j -= 1) 
			cout << "* ";
		cout << endl;
	}
	return 0;
}
