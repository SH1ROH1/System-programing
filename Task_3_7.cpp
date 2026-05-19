#include "Tasks7.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void generate(int* mas[], int size) {
    for (int i = 0; i < size; i++) {
        mas[i] = new int; 
        *mas[i] = rand() % (99 - 13 + 1) + 13;
    }
}
void print(int* mas[], int size) {
    for (int i = 0; i < size; i++) {
        cout << *mas[i] << " ";
    }
    cout << endl;
}
void oddSumCount(int* mas[], int size, int* sum, int* count) {
    *sum = 0;
    *count = 0;
    for (int i = 0; i < size; i++) {
        if (*mas[i] % 2 != 0) {
            *sum += *mas[i];
            (*count)++;
        }
    }
}
void minSwap(int* mas[], int size) {
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (*mas[i] < *mas[minIndex]) {
            minIndex = i;
        }
    }
    int* temp = mas[minIndex];
    mas[minIndex] = mas[size - 1];
    mas[size - 1] = temp;
}
void cleanup(int* mas[], int size) {
    for (int i = 0; i < size; i++) {
        delete mas[i];
    }
}
void task3() {
    const int SIZE = 10;
    int* mas[SIZE];
    generate(mas, SIZE);
    cout << "Послідовність: ";
    print(mas, SIZE);
    int sum, count;
    oddSumCount(mas, SIZE, &sum, &count);
    cout << "Сума непарних: " << sum << endl;
    cout << "Кількість непарних: " << count << endl;
    minSwap(mas, SIZE);
    cout << "Після swap: ";
    print(mas, SIZE);
    cleanup(mas, SIZE);
}