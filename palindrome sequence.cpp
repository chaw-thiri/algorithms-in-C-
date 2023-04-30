//palindrome check
// time = O(n)
// space = O(1)
#include <iostream>
#include <string>   // string class is imported to use string data type.
using namespace std;
bool isPalindrome(string);
int main() {
	// the loop will repeat unless the user inputs a palindrome sequence, else it will repeat endlessly.
	while (1) {
		string word; // string is better than char array in this case to manipulate.
		cout << "Enter a string : ";
		getline(cin,word); // gitline is used instead of cin to accept spaces between the words.
		if (isPalindrome(word))
			break;
	}

	cout << "The string is a palindrome.\n";
	cout << endl;
	cout << "End of the program.\n";

	return 0;
}
bool isPalindrome(string word) {
	/*
	* palindrome = a sequence that read the same both backwards and forwards
	* the left index will take the first letter of the word and right index will take the second letter of the word. 
	* then if loop will check whether they are the same
	* if they are not the same, the word cannot be a palindrome and a false value will return.
	* if they are the same, the left index will move to the right and right will move to the left, followed by checked whether they are equal or not.
	* the loop will continue as the left and right indice move inward.
	* once the left index goes over the right, all the characters have been checked and thus we get a palindrome.
	*/
	int leftIdx = 0;
	int rightIdx = word.length() - 1;

	while (leftIdx <= rightIdx) {
		if (word[leftIdx] != word[rightIdx])
			return false;
		++leftIdx;
		--rightIdx;
	}

	return true;
