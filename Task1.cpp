#include "Tasks.h"

#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

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


