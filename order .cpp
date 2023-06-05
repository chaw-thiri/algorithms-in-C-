// setting order using quick sort
#include <iostream>
using namespace std;
#define ASCENDING (0)
#define DESCENDING (1)
const int SIZE = 10;

// function prototype
void print_array(double[], int);
void mySort(double[], double[], int, int = ASCENDING);// setting default for int
void swap(double&, double&);
void quickSort(double[], int, int);

int main() {
    double data[SIZE] = { 0 };
    double sorted[SIZE] = { 0 };
    // store the input numbers in data array
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter a real number: ";
        cin >> data[i];
    }
    cout << "== Input numbers ==" << endl;
    print_array(data, SIZE);
    cout << "== Ascending order ==" << endl;
    mySort(data, sorted, SIZE);
    print_array(sorted, SIZE);
    cout << "== Descending order ==" << endl;
    mySort(data, sorted, SIZE, DESCENDING);
    print_array(sorted, SIZE);
    return 0;
}

//print out the array contents
void print_array(double array[], int SIZE) {
    for (int i = 0; i < SIZE; ++i)
        cout << array[i] << " ";
    cout << endl;
}

void mySort(double unsorted[], double sorted[], int SIZE, int order) {

    // *** array does not require call by reference, sorting takes place in the original array***
    // copy the unsorted array to the sorted array
    for (int i = 0; i < SIZE; ++i) {
        sorted[i] = unsorted[i];
    }
    // for decreasing order
    if (order == 1) {
        quickSort(sorted, 0, SIZE - 1);
        double reversedArray[10] = { 0, };
        // fill the reversed array with sorted values in reversed direction
        for (int i = 0; i < SIZE; ++i) {
            reversedArray[i] = sorted[(SIZE - 1) - i];
        }
        // copy the reversed back to the sorted, since the printArray function is going to take SORTED only.
        for (int i = 0; i < SIZE; ++i) {
            sorted[i] = reversedArray[i];
        }
    }
    else  quickSort(sorted, 0, SIZE - 1);// ascending would be set up by default
}

void quickSort(double unsorted[], int startIdx, int endIdx) {
    // start idx 0// 0  4,// 0 3//0 2
    // end idx 4// 2 4,// 1 4//0 4

    //7,8,3,2,1   7 1 3 2 8 
    //2 1 3 7 8   
    //1 2 3 7 8

        if (startIdx >= endIdx) // all the members of the array have been sorted, thus end the recursion
            return;

    int pivot = startIdx; //0 //0 // 0 //0
    int leftIdx = startIdx + 1; //1 , 2 , 3 , 4 // 1 2 // 1 // 3
    int rightIdx = endIdx; //4 , 3 // 2  1 // 1 // 4 3


    // one while loop == one num move, all while loop == one recursion == one pass
    // after every recursion the array will be divided into two part and this will continue until one only member is left at the final when the sorting is finished
    while (leftIdx < rightIdx) { 
        // swap positions
        if (unsorted[leftIdx] > unsorted[pivot] && unsorted[rightIdx] < unsorted[pivot]) { 
            // 8 > 7 and 1 < 7 swap 8 and 1 .. 7 1 3 2 8
            // 3 > 7 !
            // 2 > 7 !

            // 1 > 2 !

        
           
            swap(unsorted[leftIdx], unsorted[rightIdx]); // swap 8 and 1 .. 7 1 3 2 8
        }
        // increase or decrease indices
        if (unsorted[leftIdx] <= unsorted[pivot])
            // 1 < 7 >>>> [1] >> [2]
            // 3 < 7 >>>> [2] >> [3]
            // 2 < 7 >>>> [3] >> [4]

            // 1 < 2 >>>> [1] >> [2]
           
            ++leftIdx;
        if (unsorted[rightIdx] >= unsorted[pivot])
            // 8 > 7 >>> [4] >> [3]
            // 2 > 7 !
            // 2 > 7 !

            // 3 > 2  >>> [2] >> [1]
            --rightIdx;
    }
    // move the pivot to the correct position
    swap(unsorted[leftIdx-1], unsorted[pivot]);
    //swap(unsorted[right], unsorted[pivot]);  same
    // recursively sort the subarrays
    cout << "Ongoing sort ...";
    quickSort(unsorted, startIdx, rightIdx - 1);
    quickSort(unsorted, rightIdx + 1, endIdx);
}

void swap(double& i, double& j)// call by referance
{
    double temp = i;
    i = j;
    j = temp;
}
