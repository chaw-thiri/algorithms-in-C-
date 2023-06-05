#include <iostream>
using namespace std;
int main() {
	int i = 10;
	int* ip = &i;
	cout << "The address of i : " << ip << endl;
	cout << "The direct address of i using &i :  " << &i << endl;
	cout << "The value of i : " << i << endl;
	cout << "The address of the address of i : " << &ip << endl;
	cout << "The value of ip(address of i) after using dereferencing pointer : " << *ip;
	return 0;
}
