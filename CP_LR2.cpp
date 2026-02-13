#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <locale>


void analyzeNumber(unsigned int num) {
    int totalOnes = 0;
    int evenOnes = 0;

    for (int i = 0; i < 32; i++) {
        if (num & (1u << i)) {   // перевірка біта
            totalOnes++;

            if (i % 2 == 0) {    // перевірка парної позиції
                evenOnes++;
            }
        }
    }

    // Вивід двійкового представлення
    printf("Число: %u = 0x%X = ", num, num);
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0) printf(" ");
    }
    printf("\n");

    printf("Кількість одиниць у числі: %d\n", totalOnes);
    printf("Кількість одиниць на парних місцях: %d\n", evenOnes);
}

int main(void){
	setlocale(LC_ALL, "Ukr.UTF-8");
	setlocale(LC_NUMERIC, "C");
	// unsigned char ch;
	// SetConsoleOutputCP(1251);
	// srand(time(NULL));
	// ch = rand() % 128 + 128;
	// printf("Початкове значення змінної ch: %3d\n", ch);
	// ch = ~ch;
	// printf("Значення змінної ch після операції ~: %3d\n", ch);
	// return 0;
	
	// unsigned char a, b, c;
	// SetConsoleOutputCP(1251);
	// srand(time(NULL));
	// a = rand() % 128 + 128;
	// printf("Значення змінної a: %3d\n", a);
	// b = rand() % 128 + 128;
	// printf("Значення змінної b: %3d\n", b);
	// c = a & b;
	// printf("=============================\n");
	// printf("Результат операції &: %3d\n", c);
	// printf("=============================\n\n");
	// return 0;

	// unsigned char a, b, c;
	// SetConsoleOutputCP(1251);
	// srand(time(NULL));
	// a = rand() % 128 + 128;
	// printf("Значення змінної a: %3d\n", a);
	// b = rand() % 128 + 128;
	// printf("Значення змінної b: %3d\n", b);
	// c = a | b;
	// printf("=============================\n");
	// printf("Результат операції ¦: %3d\n", c);
	// printf("=============================\n\n");
	// return 0;

	// unsigned char a, b, c;
	// SetConsoleOutputCP(1251);
	// srand(time(NULL));
	// a = rand() % 128 + 128;
	// printf("Значення змінної a: %3d\n", a);
	// b = rand() % 128 + 128;
	// printf("Значення змінної b: %3d\n", b);
	// c = a ^ b;
	// printf("=============================\n");
	// printf("Результат операції ^: %3d\n", c);
	// printf("=============================\n\n");
	// return 0;
	// unsigned char a; // Операнд, для якого треба виконати зсув
	// unsigned char b; // Кількість розрядів, на яку треба
	// // здійснити зсув
	// unsigned char c; // Результат виконання операції зсуву
	// // вліво
	// SetConsoleOutputCP(1251);
	// srand(time(NULL));
	// a = rand() % 128 + 128;
	// printf("Значення змінної a: %3d\n", a);
	// b = rand() % 7 + 1;
	// printf("Значення змінної b: %3d\n", b);
	// c = a << b;
	// printf("=============================\n");
	// printf("Результат операції <<: %3d\n", c);
	// printf("=============================\n\n");
	// return 0;
	// unsigned char a; // Операнд, для якого треба виконати зсув
	// unsigned char b; // Кількість розрядів, на яку треба
	// // здійснити зсув
	// unsigned char c; // Результат виконання операції зсуву
	// // вправо
	// SetConsoleOutputCP(1251);
	// srand(time(NULL));
	// a = rand() % 128 + 128;
	// printf("Значення змінної a: %3d\n", a);
	// b = rand() % 7 + 1;
	// printf("Значення змінної b: %3d\n", b);
	// c = a >> b;
	// printf("=============================\n");
	// printf("Результат операції >>: %3d\n", c);
	// printf("=============================\n\n");
	// return 0;

  unsigned int num;
  do {
    printf("Введіть число від 2147483648 до 4294967295: ");
    scanf("%u", &num);
  } while (num < 2147483648u);
  	analyzeNumber(num);
  return 0;
}
