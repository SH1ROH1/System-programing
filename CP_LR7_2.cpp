#include <iostream>
#include <windows.h>
#include <math.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void task1();
void task2();
void task3();

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	while (true)
	{
		cout << "Введіть номер завдання (1-3) або 0 для виходу: ";
		int command;
		cin >> command;
		switch (command)
		{
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		case 3:
			task3();
			break;
		case 0:
			return 0;
		default:
			cout << "Невірна команда. Спробуйте ще раз." << endl;
		}
	}
}

void task1() {
	int k;
	cout << "Ведіть кількість повторень зображення: ";
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		if (i == 0) cout << "%%%\n" << "% %\n" << "%%%\n";
		else
		{
			cout << "----\n";
			cout << "%%%\n" << "% %\n" << "%%%\n";
		}
	}
}

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

double tan(double x) {
	return sin(x) / cos(x);
}

void task3() {
	double x1 = 0.9;
	double x2 = 0.1;
	double x3 = -0.9;
	cout << "tg(0.9) = " << tan(x1) << endl;
	cout << "tg(0.1) = " << tan(x2) << endl;
	cout << "tg(-0.9) = " << tan(x3) << endl;
}