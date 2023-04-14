#include<iostream>
using namespace std;
int main()
{
    int i, space, k = 0;
    for (i = 1; i < 7; i++)
    {
        for (space = 7; space > i; space-=1) // if you want half use i , if u want full use num input.
            cout << "  ";
        while (k != (2 * i -1)) // odd number check
        {
            cout << "* ";
            k++;
        }
        k = 0;
        cout << endl;
    }
    cout << endl;
    return 0;
}
