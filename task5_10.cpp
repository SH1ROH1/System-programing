#include "tasks10.h"
#define SIZE 4
using namespace std;
void task5() {
    int arr[SIZE][SIZE];
    srand(time(0));
    cout << "Matrix:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            arr[i][j] = rand() % 21 - 10;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    int minSum = 0, minRow = 0;
        for (int j = 0; j < SIZE; j++) {
        minSum += arr[0][j];
    }
    for (int i = 1; i < SIZE; i++) {
        int currentSum = 0;
        for (int j = 0; j < SIZE; j++) {
            currentSum += arr[i][j];
        }
        if (currentSum < minSum) {
            minSum = currentSum;
            minRow = i;
        }
    }
    cout << "\nRow with minimum sum: " << minRow << endl;
    cout << "Minimum sum = " << minSum << endl;
}