//palindrome check
// time = O(n)
// space = O(1)
#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string);
int main() {
	while (1) {
		string word; // string is better than char array in this case to manipulate.
		cout << "Enter a string : ";
		cin >> word;
		if (isPalindrome(word))
			break;
	}

	cout << "The string is a palindrome.\n";
	cout << "End of the program.\n";

	return 0;
}
bool isPalindrome(string word) {
	int leftIdx = 0;
	int rightIdx = word.length() - 1;

	while (leftIdx <= rightIdx) {
		if (word[leftIdx] != word[rightIdx])
			return false;
		++leftIdx;
		--rightIdx;
	}

	return true;

}
