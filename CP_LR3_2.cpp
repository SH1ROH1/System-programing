#define _USE_MATH_DEFINES 
#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale.h>
#include <cstdio>

using namespace std;
// 4(19) variant

int main() {
  // 1  
  setlocale(LC_ALL, "Ukr.UTF-8");
	setlocale(LC_NUMERIC, "C");
	double pi = M_PI;
	const double c = 2.997924e8; // швидкість світкла
	const double h = 6.626e-34; // Постійна Планка
	const double b = 1.38e-23;	// постійна Больцмана
  double lambda; // 
  double tau;    // 
  cout << "Введіть lambda : ";
  cin >> lambda;
  cout << "Введіть tau : ";
  cin >> tau;
	auto E = ((2*pi*c) * (h*pow(lambda,-5)))/exp((c*h)/(pow(lambda*tau,-1)));
  cout << "Результат :" << endl;
  cout << "Енергія E = " << scientific << E << endl;
  // 2
    const double x = 1.45;
    const double a = -5.89;
    const double h1 = 4.1;
    const double expected_y = 6.30082;

    double y = (pow(atan(pow(x, 3)) + cos(sqrt(x)), 2 * x) / pow(h1, x) + log(abs(2.4 * pow(x, 3)))) - a;
    printf("--- Завдання 2 ---\n");
    printf("Отриманий результат: y = %.5f\n", y);
    printf("Контрольний результат: y = %.5f\n\n", expected_y);

    // 3

  cout << "*" << setw(2) << "*" << setw(4) << "*" << setw(4) << "*" << endl; 
  cout << "*"<< setw(2) << "*" << "*" << setw(2) << "*" << "*" << setw(3) << "*" << setw(2) << "*" << endl;
  cout << "*"<< setw(2) << "*" << setw(2) << "*" << setw(2) << "*" << setw(2) << "*" << setw(4) << "*" << endl; 
  cout << "*"<< setw(2) << "*" << setw(4) << "*" << setw(3) << "*" << setw(2) << "*" << endl; 
  cout << "*"<< setw(2) << "*" << setw(4) << "*" << setw(4) << "*" << endl; 
  return 0;
}
