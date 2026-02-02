#include <iostream>
#include <locale>
#include <stdio.h>
#include <dirent.h>



using namespace std;

int main(void)
{
	setlocale(LC_CTYPE , "ukr");

// Оголошення констант та змiнних:
  const float pi = 3.14159; // оголошення константи pi
  float r; // радiус основи прямого кругового цилiндра
  float h; // висота прямого кругового цилiндра
  float sb; // площа бiчної поверхнi цилiндра
  float sp; // площа повної поверхнi цилiндра
  float v; // об'єм цилiндра

  // Ввiд заданих величин:
  printf(" Введiть радiус основи цилiндра: ");
  scanf("%f", &r);  // Используем стандартный scanf для Linux
  printf(" Введiть висоту цилiндра: ");
  scanf("%f", &h);  // Используем стандартный scanf для Linux
  // Обчислення параметрiв цилiндра:
  sb = 2 * pi * r * h;
  sp = sb + 2 * pi * r * r * h;
  v = pi * r * h * h;

  // Друк результатiв у виглядi таблицi:
  printf("\n Вхiднi величини та результати обчислень:\n");
  printf(" I-------------------------------------------I\n");
  printf(" I Вхiднi величини: I\n");
  printf(" I-------------------------------------------I\n");
  printf(" I Радiус основи цилiндра I %6.2f I\n", r);
  printf(" I--------------------------------------------\n");

  printf(" I Висота цилiндра I %8.4f I\n", h);
  printf(" I-------------------------------------------I\n");
  printf(" IРезультати обчислень: I\n");
  printf(" I-------------------------------------------I\n");
  printf(" I Бiчна поверхня цилiндра I %8.3f I\n", sb);
  printf(" I-------------------------------------------I\n");
  printf(" I Повна поверхня цилiндра I %3.7f I\n", sp);
  printf(" I-------------------------------------------I\n");
  printf(" I Об’єм цилiндра I %8.2f I\n", v);
  printf(" I-------------------------------------------I\n");
  
	/* lab_work_01_02 */

	// Форматований вивiд даних цiлих типiв
	printf(" %d\n", 455);
	printf(" %i\n", 455);
	printf(" %d\n", +455);
	printf(" %d\n", -455);
	printf(" %hd\n", 32000);
	printf(" %ld\n", 2000000000);

	printf(" %o\n", 455);
	printf(" %u\n", -455);
	printf(" %x\n", 455);
	printf(" %X\n\n", 455);
	// Форматований вивiд даних дійсних типiв
	printf(" %e\n", 1234567.89);
	printf(" %e\n", +1234567.89);
	printf(" %e\n", -1234567.89);
	printf(" %e\n", -1234567.89);
	printf(" %E\n", 1234567.89);
	printf(" %f\n", 1234567.89);
	printf(" %g\n", 1234567.89);
	printf(" %G\n\n", 1234567.89);
	// Форматований вивiд даних символьного типу
	char symv = 'A';
	char str[] = "Це рядок";
	printf("\n %c", symv);
	printf("\n %s", "Це рядок-константа");
	printf("\n %s", str);

	/* lab_work_01_03 */

	printf(" %4d\n", 1);
	printf(" %4d\n", 12);
	printf(" %4d\n", 123);
	printf(" %4d\n", 1234);
	printf(" %4d\n", 12345);
	printf(" %4d\n", -1);
	printf(" %4d\n", -12);
	printf(" %4d\n", -123);
	printf(" %4d\n", -1234);
	printf(" %4d\n", -12345);

	printf(" %8s%8d%8c%8f\n", "Привiт", 7, 'a', 1.23);
	printf(" %-8s%-8d%-8c%-8f\n", "Привiт", 7, 'a', 1.23);

	printf(" %d\n %d\n", 786, -786);
	printf(" %+d\n %+d\n", 786, -786);
	printf(" %d\n %d\n", 786, -786);
	printf(" %d\n %d\n", 786, -786);
	int c = 1427;
	double p = 1427.0;
	printf("\n %#o", c);
	printf("\n %#x", c);
	printf("\n %#X", c);
	printf("\n %g", p);
	printf("\n %#g\n", p);

	printf(" %+09d\n", 452);
	printf(" %09d\n", 452);
}
