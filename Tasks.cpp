#include <iostream>
#include "Tasks.h"


using namespace std;

void tasks() {
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
			return;
		default:
			cout << "Невірна команда. Спробуйте ще раз." << endl;
		}
	}
}


