#include "tasks10.h"
#define ROWS 5 
#define COLS 6
using namespace std;
void task4() {
        int arr[ROWS][COLS];
        srand(time(0));
        cout << "Matrix:\n";
        for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 21 - 10;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nAverage positive elements for each column:\n";
    for (int j = 0; j < COLS; j++) {
        int sum = 0, count = 0;
        for (int i = 0; i < ROWS; i++) {
            if (arr[i][j] > 0) {
                sum += arr[i][j];
                count++;
            }
        }
        if (count > 0)
            cout << "Column "
            << j
            << ": "
            << (double)sum / count
            << endl;
        else
            cout << "Column " << j << ": no positive elements" << std::endl;
    }
}