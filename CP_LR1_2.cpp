#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <locale.h>

using namespace std;

// 19 variant 
int main(void){

  SetConsoleOutputCP(65001);
  SetConsoleCP(65001);
	setlocale(LC_ALL, "Ukr.UTF-8");
	setlocale(LC_NUMERIC, "C");

	// Задача 1
	//1
  float argument;
  printf("Введіть аргумент: ");
  scanf_s("%f", &argument);
  float x = argument;
	//2
	int k;
	//3
	const int A = 3, B = 2;
	//4
  printf("Введіть k: ");
  scanf_s("%d", &k);
	printf("Змінніть x на: ");
	scanf_s("%f", &x);
	//5
	float y = A * x * x + B * k;
	printf("y = %.3f => %e\n", y, y);

	// Задача 2
	//1

		char a = 'A';
    printf("%-2c%2c\n", a, a);
    printf("%1c%2c%2c%2c\n", a, a, a, a);
    printf("%-2c%2c\n", a, a);
    printf("%-2c%2c\n", a, a);
    printf("%-2c%2c\n", a, a);
		//2
		char star = '*';
		printf("%c%2c%2c%2c%2c\n", star, star, star, star, star);
		printf("%6c\n", star);
		printf("%c%2c%2c%2c%2c\n", star, star, star, star, star);
		printf("%4c\n", star);
		printf("%c%2c%2c%2c%2c\n", star, star, star, star, star);


		// Задача 3
	char starter[] = "| # | номер аудиторії | корпус | кількість місць |";
	char line[] = "--------------------------------------------------";
	int number_auditory;
	int number_zone;
	int value_sit;
	int numbers = 1;
	printf("Введіть номер аудиторії: ");
	scanf_s("%d", &number_auditory);
	printf("Введіть корпус: ");
	scanf_s("%d" , &number_zone);
	printf("Введіть кількість місць: ");
	scanf_s("%d", &value_sit);
	// Друк результатiв у виглядi таблицi:
	printf("\n%s\n", starter);
	printf("%s\n", line);
	printf("| %-1d | %-15d | %-6d | %-15d |\n", numbers, number_auditory, number_zone, value_sit);
	printf("%s\n", line);
	
  return 0;
}

