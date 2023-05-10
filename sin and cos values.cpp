#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int theta = 0, r = 10;
	double x, y, rad;
	for (theta; theta < 360; ++theta) {
		rad = (theta * (M_PI / 180));
		x = r * cos(rad);
		y = r * sin(rad);
		cout << theta << " : " << x << ", " << y << endl;

	}
	return 0;

}
