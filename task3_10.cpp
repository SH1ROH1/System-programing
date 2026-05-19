#include "tasks10.h"
#define ROWS 2
#define COLS 3
using namespace std;
void task3() {
    double y[ROWS][COLS];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            double value =(j - 2 * 3.1 * i) * sqrt(abs((i - j * j) * (i - 1.5) * (j - 4.2)));
            y[i][j] = value;
            cout << y[i][j] << "\t";
        }
        cout << endl;
    }
}