#include <iostream>
#include <cstdlib> // to use random
#include <ctime> // to use time
#include <iomanip>
const int SIZE(20);
using namespace std;

//function prototypes
void printArray(int array[SIZE][SIZE]);

void getRowSum(int array[SIZE][SIZE]);
void getColSum(int array[SIZE][SIZE]);

void getDiagSum(int array[SIZE][SIZE]);
void getBWDiagSum(int array[SIZE][SIZE]);

void getRowMax(int array[SIZE][SIZE]);
void getColMax(int array[SIZE][SIZE]);

void getLargestRow(int array[SIZE][SIZE]);
void getLargestCol(int array[SIZE][SIZE]);


int main() {
	srand((unsigned)time(NULL));
	int array[SIZE][SIZE] = { 0, };

	// fill the array with random number
	for (int i = 0; i < 20; ++i) {
		for (int j = 0; j < 20; ++j) {
			array[i][j] = rand() % 100;// reminder between 0 and 100
		}
	}

	//function calls
	printArray(array); // ***don't add index when calling function for array 
	getRowSum(array);
	getColSum(array);
	getDiagSum(array);
	getBWDiagSum(array);
	getRowMax(array);
	getColMax(array);
	getLargestRow(array);
	getLargestCol(array);


}
// to print the array
void printArray(int array[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE; ++j) {
			cout << setw(2) << array[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

//get sum of a row
void getRowSum(int array[SIZE][SIZE]) {
	int rowSum = 0;
	int rowNum;
	cout << "Enter the index of the row for row sum() : ";
	cin >> rowNum;
	for (int i = 0; i < SIZE; ++i) {
		rowSum += array[rowNum][i];
	}
	cout << "Sum of the row : " << rowSum << endl;
	cout << endl;
}

// get sum of a col
void getColSum(int array[SIZE][SIZE]) {
	int colSum = 0;
	int colNum;
	cout << "Enter the index of the column for column sum() : ";
	cin >> colNum;
	for (int i = 0; i < SIZE; ++i) {
		colSum += array[i][colNum];
	}
	cout << "Sum of the col : " << colSum << endl;
	cout << endl;

}
// to get diagonal sum
void getDiagSum(int array[SIZE][SIZE]) {
	int diagSum= 0;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (i == j) diagSum += array[i][j];
		}
	}
	cout << "Diagonal Sum : " << diagSum << endl;
	cout << endl;

}
//to get backward diagnoal sum
void getBWDiagSum(int array[SIZE][SIZE]){
	int BWDiagSum = 0;
	for (int i = SIZE-1; i >= 0; --i) {
		for (int j = 0; j < SIZE; ++j) {
			if (i + j == SIZE-1) // e.g array[]
			{
				BWDiagSum += array[i][j];
			}
			
		}
	}
	cout << "Backward Diagonal Sum : " << BWDiagSum << endl;
	cout << endl;
}

//to get the max of the row
void getRowMax(int array[SIZE][SIZE]) {
	int max = array[0][0];
	int rowNum;
	cout << "Enter the index of the row for row_max() : ";
	cin >> rowNum;
	for (int i = 0; i < SIZE; ++i) {
		if (array[rowNum][i] > max) max = array[rowNum][i];
		}
	cout << "Maximum value of the row : " << max << endl;
	cout << endl;


}
// get col max
void getColMax(int array[SIZE][SIZE]) {
	int max = array[0][0];
	int colNum;
	cout << "Enter the index of the col for col_max() : ";
	cin >> colNum;
	for (int i = 0; i < SIZE; ++i) {
		if (array[i][colNum] > max) max = array[i][colNum];
	}
	cout << "Maximum value of the col : " << max << endl;
	cout << endl;
}
// find the row with the largest sum
void getLargestRow(int array[SIZE][SIZE]) {
	int RowSum[SIZE] = {0,};
	// add all the sum results to the RowSum Array
	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE; ++j) {
			RowSum[i] += array[i][j];
		}
	}
	//find the max in the array
	int MaxRowSum = RowSum[0];
	int  MaxRowSumIdx = 0;
	for (int i = 0; i < SIZE; i++) {
		if (MaxRowSum < RowSum[i]) {
			MaxRowSum = RowSum[i];
			MaxRowSumIdx = i;

		}
	}
	cout << "Row Index of the Largest Sum : " << MaxRowSumIdx << endl;
	cout << endl;

}

// find the col with the largest sum
void getLargestCol(int array[SIZE][SIZE]) 
	{
		int ColSum[SIZE] = { 0, };
		// add all the sum results to the ColSum Array
		for (int i = 0; i < SIZE; ++i) {
			for (int j = 0; j < SIZE; ++j) {
				ColSum[j] += array[i][j];
			}
		}

		//find the max in ColSum array
		int MaxColSum = ColSum[0];
		int  MaxColSumIdx = 0;
		for (int i = 0; i < SIZE; i++) {
			if (MaxColSum < ColSum[i]) {
				MaxColSum = ColSum[i];
				MaxColSumIdx = i;

			}
		}
		cout << "Col Index of the Largest Sum : " << MaxColSumIdx << endl;
		cout << endl;

	}

