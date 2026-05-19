#include "tasks10.h"
#define SIZE 15
using namespace std;
void task2() {
    double arr[SIZE];
    srand(time(0));
    cout << "Array:\n";
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 21 - 10; 
        cout << arr[i] << " ";
    }
    double positiveProduct = 1, negativeProduct = 1;
    bool hasPositive = false, hasNegative = false;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > 0) {
            positiveProduct *= arr[i];
            hasPositive = true;
        }
        else if (arr[i] < 0) {
            negativeProduct *= abs(arr[i]);
            hasNegative = true;
        }
    }
    if (!hasPositive)
        positiveProduct = 0;
    if (!hasNegative)
        negativeProduct = 0;
    cout << "\nDifference = " << positiveProduct << " - " << negativeProduct << " => " << positiveProduct - negativeProduct << endl;
}