#include <iostream>
#include <stdio.h>
#include <cmath>
#include <random>

using namespace std;

int main(void)
{
    /*5*/ printf("#5\n");
    int a=28, b=-3, ch='*';
    double w = 0.505;
    char text[]="Вивчaємо функцію printf()";

    printf("%s:\n a=%u b=%d ch=%c\n", text,a,b,ch);
    printf("\tЗначення а=> %d = %#o = %x\n", a,a,a);
    printf("\tЗначення b => %+d = %u = %#6x\n", b,b,b);
    printf(" %f |%10.2f |%10.2e |%10.4g \n", w,w*w,w+a,(double)a/(double)b);
    /*6.1*/ printf("#6.1\n");
    srand(time(NULL));
    int n = 10 + rand() % 200;
    double sq = sqrt(n), cu = pow(n,3);
    
    printf("Число: %d\nКорінь квадратний: %.2f\nКуб числа: %d\n", n,sq , cu);
    /*6.2*/ printf("#6.2\n");
    double aa = 1, bb = -3, cc = 2;
    double dis = bb * bb - 4 * aa * cc;
    if (dis >= 0) {
        double root1 = (-bb + sqrt(dis)) / (2 * aa);
        double root2 = (-bb - sqrt(dis)) / (2 * aa);
        printf("Корені рівняння: %.2f і %.2f", root1, root2);
    } else {
        printf("Коренів немає (Дискримінант < 0)");}
    /*6.3*/ printf("#6.3\n");
    time_t t = time(NULL);
    tm* now = localtime(&t);
    const char* months[] = {
        "Січень", "Лютий", "Березень", "Квітень", "Травень", "Червень",
        "Липень", "Серпень", "Вересень", "Жовтень", "Листопад", "Грудень"
    };
    printf("Поточна дата: %02d %s %d року\n", now->tm_mday, months[now->tm_mon], now->tm_year + 1900);
    /*7*/ printf("#7\n");
    int x;
    printf("Введіть ціле число: \n");
    if(scanf("%d", &x) == 1) 
        printf("Ви ввели: %d\n", x);
    else 
        printf("Некоректне введення числа.\n");
    /*8*/ printf("#8\n");
    long int a1;
    double x1;
    long double y1;
    scanf("%Lf", &y1);
    printf("%.4Lf\n", y1);
    scanf("%ld %lf", &a1, &x1);
    printf("%ld %.2f\n", a1, x1);
    /*9*/ printf("#9\n");
    //9.1
    unsigned long time_sec;
    scanf("%lu", &time_sec);
    printf("Кількість хвилин: %lu\n", time_sec / 60);
    //9.2
    double a2, b2, c2;
    scanf("%lf %lf %lf", &a2, &b2, &c2);
    printf("Сума: %.2f\n", a2 + b2 + c2);
    //9.3
    char name[50] ="Mllk";
    double price = 32.50;
    int quantity = 10;
    scanf("%s %lf %d", name, &price, &quantity);
    printf("Назва товару: %s\nЦіна: %.2f\nКількість: %d\n", name, price, quantity);
    /*10*/ printf("#10\n");
    unsigned int num;
    char code[5];
    double res;
    printf("Ведіть ціле число, символ та число з плаваючою крапкою:");
    scanf("%u %s %lf", &num, code, &res);
    printf("Введене число: %u\nСимвол: %s\nЧисло з плаваючою крапкою: %.2f\n", num, code, res);
    /*11*/ printf("#11\n");
    double num1, num2, num3, num4, num5;
    printf("Введіть п'ять чисел з плаваючою крапкою:\n");
    scanf("%lf %lf %lf %lf %lf", &num1, &num2, &num3, &num4, &num5);
    printf("Введені числа: %lf, %lf, %lf, %lf, %lf\n", num1, num2, num3, num4, num5);
    printf("Введення з точністью: %.2f, %.2f, %.2f, %.2f, %.2f\n", num1, num2, num3, num4, num5);
    /*12*/ printf("#12\n");
    int xx;
    printf("Ведіть ціле число: ");
    scanf("%d", &xx);
    printf("Результат: %1.4d\n", xx);
    /*13*/ printf("#13\n");
    double xxx;
    printf("Ведіть число з плаваючою крапкою: ");
    scanf("%lf", &xxx);
    printf("Результат: %-10.4f\n", xxx);
}
