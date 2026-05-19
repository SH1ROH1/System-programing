#include <iostream>
#include <windows.h>
#include <math.h>
#include <iomanip>
using namespace std;
const float pi = 3.14159;
const float e = 2.71828;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//lab_work_05_01 
	//Оголошення змінних:
	float x, y;
	float a, b;
	// Введення значення аргумента (довільне дійсне число):
	cout << "Enter x, a, b: ";
	cin >> x >> a >> b;
	if (x < -1)
		y = pow(abs(b) + pow(sin(a * x), 2) + 1, 1.0 / 5);
	else if (x >= -1 && x <= 2)
		y = 5 + atan(pow(abs(b * x) + 1, 1.0 / 3));
	else // x > 2
		y = exp(-x / a * b);
	cout << setprecision(4) << "\nx = " << x << "\na = " << a << "\nb = " <<b << "\ny = " << y;
	return 0;
}
#include <iostream>
#include <windows.h>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// lab_work_05_02
	//Оголошення зінних
	float x; // Абсциса точки М
	float y; // Ордината точки М
	// Введення значень абсциси та ординати точки:
	cout << "\n Введіть значення абсциси та ординати: ";
	cin >> x >> y;
	//Визначення чи належить точка M(x,y) заштрихованій на малюнку області
	if (((x * x + y * y <= 1) && (x <= 0) && (y <= 0)) || ((x >= 0 && y >= 0) && (x <= 1 && y <= 1)))
		cout << "\nx=" << x << " y = " << y << " Точка M(x, y) належить заштрихованій області";
	else
		cout << "\nx=" << x << " y = " << y << " Точка M(x, y) не належить заштрихованій області ";
		return 0;
}
void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float a, b;
    int k;
    cout << "Введіть a і b: ";
    cin >> a >> b;
    k = (a * b < 0) ? 1 : 2;
    switch (k)
    {
    case 1:
        a = -a;
        b = -b;
        break;

    case 2:
        a = 0;
        b = 0;
        break;
    }
    cout << "Нові значення:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	using namespace std;
	int theme, money;
	char variant;
	cout << "Введіть номер теми (1,2,3), варіант (a,b,c) та купюру (5,10,20): ";
	cin >> theme >> variant >> money;
	string themeName;
	switch (theme) {
	case 1: themeName = "Новорічний"; break;
	case 2: themeName = "З Днем Народження"; break;
	case 3: themeName = "С Днем Захисника Батьківщини"; break;
	default:
		cout << "Невірний номер теми!" << endl;
		return 0;
	}
	switch (variant) {
	case 'a': cout << themeName << " варіант а"; break;
	case 'b': cout << themeName << " варіант b"; break;
	case 'c': cout << themeName << " варіант c"; break;
	default:
			cout << "Невірний варіант!" << endl;
			return 0;
		}
	switch (money) {
	case 5:  cout << " 2грн + 1грн" << endl; break;
	case 10: cout << " 5грн + 2грн + 1грн" << endl; break;
	case 20: cout << " 10грн + 5грн + 2грн + 1грн" << endl; break;
	default: cout << "Невірна купюра!" << endl; return 0;
	}
	return 0;
}
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	while (true)
	{
		int command;
		cout << "Введіть номер завдання (1-4) або 0 для виходу: ";
		cin >> command;
		switch (command)
		{
		case 1:
			float x1, y1;
			float a1, b1;
			cout << "Enter x, a, b: ";
			cin >> x1 >> a1 >> b1;
			if (x1 < -1)
				y1 = pow(abs(b1) + pow(sin(a1 * x1), 2) + 1, 1.0 / 5);
			else if (x1 >= -1 && x1 <= 2)
				y1 = 5 + atan(pow(abs(b1 * x1) + 1, 1.0 / 3));
			else 
				y1 = exp(-x1 / a1 * b1);
			cout << setprecision(4) << "\nx = " << x1 << "\na = " << a1 << "\nb = " <<b1 << "\ny = " << y1 << endl;
			break;
		case 2:
			float x;
			float y;
			cout << "\n Введіть значення абсциси та ординати: ";
			cin >> x >> y;
			if (((x * x + y * y <= 1) && (x <= 0) && (y <= 0)) || ((x >= 0 && y >= 0) && (x <= 1 && y <= 1)))
				cout << "\nx=" << x << " y = " << y << " Точка M(x, y) належить заштрихованій області" << endl;
			else
				cout << "\nx=" << x << " y = " << y << " Точка M(x, y) не належить заштрихованій області " << endl;
			break;
		case 3:
			float a, b;
			int k;
			cout << "Введіть a і b: ";
			cin >> a >> b;
			k = (a * b < 0) ? 1 : 2;
			switch (k)
			{
			case 1:
				a = -a;
				b = -b;
				break;
			case 2:
				a = 0;
				b = 0;
				break;
			}
			cout << "Нові значення:" << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
			break;
		case 4: {
			int theme, money;
			char variant;
			string themeName;
			cout << "Введіть номер теми (1,2,3), варіант (a,b,c) та купюру (5,10,20): ";
			cin >> theme >> variant >> money;
			switch (theme) {
			case 1: themeName = "Новорічний"; break;
			case 2: themeName = "З Днем Народження"; break;
			case 3: themeName = "С Днем Захисника Батьківщини"; break;
			default:
				cout << "Невірний номер теми!" << endl;
				break;
			}
			switch (variant) {
			case 'a': cout << themeName << " варіант а"; break;
			case 'b': cout << themeName << " варіант b"; break;
			case 'c': cout << themeName << " варіант c"; break;
			default:
				cout << "Невірний варіант!" << endl;
				break;
			}
			switch (money) {
			case 5:  cout << " 2грн + 1грн" << endl; break;
			case 10: cout << " 5грн + 2грн + 1грн" << endl; break;
			case 20: cout << " 10грн + 5грн + 2грн + 1грн" << endl; break;
			default: cout << "Невірна купюра!" << endl; break;
			}
			break;
		} 
		case 0:
			cout << "Вихід з програми." << endl;
			return;
		default:
			cout << "Невірний номер завдання. Спробуйте ще раз." << endl;
			return;
		}
	}
}

