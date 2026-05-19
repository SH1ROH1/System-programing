#include "Tasks.h"

#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void task2() {
	srand(time(0));
	int arr[10];
	cout << "Послідовність: ";     // Генерація послідовності
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % (48 - (-5) + 1) + (-5);
		cout << arr[i] << " ";
	}
	cout << endl;
	int sum = 0, count = 0;     // Сума і кількість непарних
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0) {
			sum += arr[i];
			count++;
		}
	}
	cout << "Сума непарних: " << sum << endl;
	cout << "Кількість непарних: " << count << endl;
	int min = arr[0];     // Мінімальний елемент
	for (int i = 1; i < 10; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << "Мінімальний елемент: " << min << endl;
}