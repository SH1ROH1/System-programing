#include "Tasks7.h"
#include <iostream>
using namespace std;    
void task2() {
    double arr[8] = { 1.2, 3.4, 5.6, 7.8, 9.0, 2.3, 4.5, 6.7 };
    double* p1 = &arr[2]; // 3-й елемент
    double* p2 = &arr[7]; // 8-й елемент
    // 1) Різниця між вказівниками
    cout << "Різниця p2 - p1: " << p2 - p1 << endl;
    double a;
    // 2)
    a = (*p2)++;
    cout << "a = (*p2)++: " << a << endl;
    // 3)
    a = ++(*p1);
    cout << "a = ++(*p1): " << a << endl;
    // 4)
    *p1++ = *p2++;
    cout << "Після *p1++ = *p2++: " << endl;
    cout << "Масив: ";
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}