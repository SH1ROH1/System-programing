#include <math.h>
#include <windows.h>
#include <iostream>

#define pi 3.14159  // константа pi
float Objem(float rc, float hc); // об'єм цилiндра 
float PovPoverchnja(float rc, float hc); // площа повної поверхнi цилiндра
float BitshPoverchnja(float rc, float hc);  // площа бiчної поверхнi цилiндра
using namespace std;
// lab_work_07_01
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float r; // радiус основи прямого кругового цилiндра
	float h; // висота прямого кругового цилiндра
	float sb; // площа бiчної поверхнi цилiндра
	float sp; // площа повної поверхнi цилiндра
	float v; // об'єм цилiндра
	cout << "\n Введiть радiус основи цилiндра: ";
	cin >> r; // радiус основи прямого кругового цилiндра
	cout << "\n Введiть висоту цилiндра: ";
	cin >> h; // висота прямого кругового цилiндра
	cout << "\n Площа бiчної поверхнi цилiндра sb=" << BitshPoverchnja(r, h) << endl; // площа бiчної поверхнi цилiндра
	cout << " Площа повної поверхнi цилiндра sp=" << PovPoverchnja(r, h) << endl; // площа повної поверхнi цилiндра
	cout << " Об'єм цилiндра v=" << Objem(r, h) << endl; // об'єм цилiндра
}
float BitshPoverchnja(float rc, float hc) { // площа бiчної поверхнi цилiндра
	return 2 * pi * rc * hc;;
}
float PovPoverchnja(float rc, float hc) { // площа повної поверхнi цилiндра
	return BitshPoverchnja(rc, hc) + 2 * pi * rc * rc;
}
float Objem(float rc, float hc) { // об'єм цилiндра
	return pi * rc * rc * hc;
}
