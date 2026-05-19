 
#define _USE_MATH_DEFINES 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale.h>
#include <cstdio>
#include <windows.h>

// 4 (19) variant
using namespace std;
int main(void)
{
	setlocale(LC_ALL, "Ukrainian");
	setlocale(LC_NUMERIC, "C");
	SetConsoleOutputCP(CP_UTF8);   
	SetConsoleCP(CP_UTF8);        

	// #1
	cout << "Введіть три цілих числа: ";
	int a, b, c; cin >> a >> b >> c;
	if ( a > 0 ) a= a * a;
	if (b > 0) b = b * b;
	if (c > 0) c = c * c;
	cout << a << " " << b << " " << c << endl;

	// #2
	cout << "Введіть тризначне число: ";
	int f; cin >> f;
	if (f >= 10 || f <= -10) {
		if (f >= 100 || f <= -100) {
			cout << "Число тризначне" << endl;
		} else
			cout << "Число двозначне" << endl;
	} else 
		cout << "Число однозначне" << endl;
	// #3
	const double price_per_min = 2.0; 
	int duration, day;
	cout << "Введіть тривалість розмови (хвилини): ";
	cin >> duration;
	cout << "Введіть день тижня (1-7): ";
	cin >> day;
	double total = duration * price_per_min;
	if (day == 6 || day == 7) {
		total *= 0.85; // знижка 15%
	}
	cout << "Вартість розмови: " << total << " грн" << endl;
	
	// #4
	cout << "Введіть координати точки (x, y): ";
	int x, y; cin >> x >> y;
	if (y = pow(-x, 2) + 2) {
		cout << "Точка належить графіку функції y = -x^2 + 2" << endl;
	}
	return 0;
};