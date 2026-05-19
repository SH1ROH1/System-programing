#include "Tasks.h"

#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

double tan(double x) {
	return sin(x) / cos(x);
}

void task3() {
	double x1 = 0.9;
	double x2 = 0.1;
	double x3 = -0.9;
	cout << "tg(0.9) = " << tan(x1) << endl;
	cout << "tg(0.1) = " << tan(x2) << endl;
	cout << "tg(-0.9) = " << tan(x3) << endl;
}
