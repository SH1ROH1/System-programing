#include <iostream>
#include <windows.h>

using namespace std;

int main(void) {

	// додав правильне відображання виводу української
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8); 
	
	// Змінні
	int a = 1;
	float b = 2.3e-2; // лавуча точка

	// вивід у консоль
	cout << a << " " << b << endl << b*23e1 /*використовую числа з плавучою точкою*/ << endl;
	std::cout << "Hello World!";
	cout << "Хей!";

	// Закриття на Ентер
  cin.get();
}