#include <iostream>
// function manipulation
using namespace std;
const int SIZE = 10; // n

//function prototypes
double averageFinder(double[], int);   // arr as an argument array_name[], int for size
double sumFinder(double[], int);

int main() {


	double arrX[SIZE] = { 3.0, 4.5, 5.5, 6.5, 7.5, 8.5, 8.0, 9.0, 9.5, 10.0 };
	double arrY[SIZE] = { 1.5, 2.0, 3.5, 5.0, 6.0, 7.5, 9.0, 10.5, 12.0, 14.0 };
	double arrXY[SIZE] = { 0, };
	double arrXsquare[SIZE] = { 0, };

	// filling Xsquare and XY arrays
	for (int i = 0; i < 10; i++) {
		arrXY[i] = arrX[i] * arrY[i];
		arrXsquare[i] = arrX[i] * arrX[i];
	}

	// get array X and Y average
	double avgX = averageFinder(arrX, SIZE);
	double avgY = averageFinder(arrY, SIZE);

	// get sums
	double sumX = sumFinder(arrX, SIZE);
	double sumY = sumFinder(arrY, SIZE);
	double sumXsquare = sumFinder(arrXsquare, SIZE);
	double sumYX = sumFinder(arrXY, SIZE);


	//find b
	double pointB = ((SIZE * sumYX) - (sumX * sumY)) / ((SIZE * sumXsquare) - (sumX * sumX));
	// find a 
	double pointA = avgY - (pointB * avgX);

	//y= a + bx
	cout << "Line : y = " << pointA << " + " << pointB << "x" << endl;

	return 0;
}
double averageFinder(double array[], int SIZE) {
	double sum = 0, avg;
	for (int i = 0; i < SIZE; ++i) {
		sum += array[i];
	}
	avg = sum / SIZE;
	return avg;
}

double sumFinder(double array[], int SIZE) {
	double sum = 0;
	for (int i = 0; i < SIZE; ++i) {
		sum += array[i];
	}
	return sum;
}
