
#define _USE_MATH_DEFINES 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale.h>
#include <cstdio>

// 4 (19) variant
using namespace std;
int main(void)
{
	setlocale(LC_ALL, "Ukr.UTF-8");
	setlocale(LC_NUMERIC, "C");

	// #1
	int a, b, c; cin >> a >> b >> c;
	if (a > 0) a = a * a;
	if (b > 0) b = b * b;
	if (c > 0) c = c * c;
	cout << a << " " << b << " " << c << endl;


	return 0;
};