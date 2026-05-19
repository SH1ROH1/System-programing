#include "Tasks7.h"
#include <iostream>
using namespace std;
void task1() {
    long double x;
    cout << "Введіть число: ";
    cin >> x;

    long double* p = &x;

    cout << "Значення через змінну: " << x << endl;
    cout << "Значення через вказівник: " << *p << endl;

    cout << "Адреса змінної: " << &x << endl;
    cout << "Адреса через вказівник: " << p << endl;
}