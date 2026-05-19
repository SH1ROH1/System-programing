#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale.h>
#include <cstdio>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukr.UTF-8");
		setlocale(LC_NUMERIC, "C");


    // 1 Трикутник за трьома сторонами
    double a, b, c;
    printf("Введіть сторони трикутника a, b, c: ");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    double p = (a + b + c) / 2.0;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Напівпериметр P = %.2f, Площа трикутника = %.2f\n", p, area);

    // 2 Висоти
    double ha = 2 * area / a;
    double hb = 2 * area / b;
    double hc = 2 * area / c;
    printf("Висоти трикутника: ha = %.2f, hb = %.2f, hc = %.2f\n", ha, hb, hc);

    // 3 Медіани
    double ma = 0.5 * sqrt(2*pow(b, 2) + 2*pow(c, 2) - pow(a, 2));
    double mb = 0.5 * sqrt(2*pow(a, 2) + 2*pow(c, 2) - pow(b, 2));
    double mc = 0.5 * sqrt(2*pow(a, 2) + 2*pow(b, 2) - pow(c, 2));
    printf("Медіани трикутника: ma = %.2f, mb = %.2f, mc = %.2f\n", ma, mb, mc);

    // 4 Радіуси
    double R_ol = (a * b * c) / (4 * area);
    double r_in = area / p;
    printf("Радіуси кола: описане R = %.2f, вписане r = %.2f\n", R_ol, r_in);

    // 5 Прямокутний трикутник
    double k1, k2;
    printf("Введіть катети прямокутного трикутника a, b: ");
    scanf_s("%lf %lf", &k1, &k2);
    double hyp = sqrt(k1*k1 + k2*k2);
    double s_rect = (k1 * k2) / 2.0;
    printf("Гіпотенуза = %.2f, Площа = %.2f\n", hyp, s_rect);

    // 6 Трапеція
    double tr_a, tr_b, tr_h;
    printf("Введіть основи a, b та висоту h трапеції: ");
    scanf_s("%lf %lf %lf", &tr_a, &tr_b, &tr_h);
    double mid_line = (tr_a + tr_b) / 2.0;
    double s_trap = mid_line * tr_h;
    printf("Середня лінія трапеції = %.2f, Площа = %.2f\n", mid_line, s_trap);

    // 7 Коло
    double rad;
    printf("Введіть радіус кола R: ");
    scanf_s("%lf", &rad);
    double circ = 2 * M_PI * rad;
    double s_circ = M_PI * pow(rad, 2);
    printf("Довжина кола = %.2f, Площа = %.2f\n", circ, s_circ);

    // 8 Паралелепіпед
    double p_a, p_b, p_c;
    printf("Введіть сторони паралелепіпеда a, b, c: ");
    scanf_s("%lf %lf %lf", &p_a, &p_b, &p_c);
    double vol = p_a * p_b * p_c;
    double diag = sqrt(pow(p_a, 2) + pow(p_b, 2) + pow(p_c, 2));
    printf("Об'єм паралелепіпеда = %.2f, Діагональ = %.2f\n", vol, diag);

    // 9 Тетраедр
    double tet_a;
    printf("Введіть сторону тетраедра a: ");
    scanf_s("%lf", &tet_a);
    double V_tet = (pow(tet_a, 3) * sqrt(2)) / 12.0;
    double S_tet = pow(tet_a, 2) * sqrt(3);
    double R_tet = (tet_a * sqrt(6)) / 4.0;
    printf("Об'єм V = %.2f, Площа поверхні S = %.2f, Радіус сфери R = %.2f\n", V_tet, S_tet, R_tet);

    // 10 Циліндр
    double cyl_R, cyl_H;
    printf("Введіть радіус основи R та висоту H: ");
    scanf_s("%lf %lf", &cyl_R, &cyl_H);
    double V_cyl = M_PI * pow(cyl_R, 2) * cyl_H;
    double Sb_cyl = 2 * M_PI * cyl_R * cyl_H;
    double Sp_cyl = Sb_cyl + 2 * M_PI * pow(cyl_R, 2);
    printf("Об'єм V = %.2f, Бічна поверхня Sb = %.2f, Повна поверхня Sp = %.2f\n", V_cyl, Sb_cyl, Sp_cyl);

    // 11 Конус
    double cone_R, cone_H, cone_L;
    printf("Введіть радіус R, висоту H та твірну L: ");
    scanf_s("%lf %lf %lf", &cone_R, &cone_H, &cone_L);
    double V_cone_11 = (M_PI * pow(cone_R, 2) * cone_H) / 3.0;
    double Sb_cone_11 = M_PI * cone_R * cone_L; // Виправлено формулу згідно з геометрією (у тексті була помилкова 2)
    double Sp_cone_11 = Sb_cone_11 + M_PI * pow(cone_R, 2);
    printf("Об'єм V = %.2f, Бічна поверхня Sb = %.2f, Повна поверхня Sp = %.2f\n", V_cone_11, Sb_cone_11, Sp_cone_11);

    // 17 Відстань від точок до прямої
    double ax17, ay17, bx17, by17, A17, B17, C17;
    printf("Введіть координати M1(x,y) та M2(x,y): ");
    scanf_s("%lf %lf %lf %lf", &ax17, &ay17, &bx17, &by17);
    printf("Введіть коефіцієнти прямої A, B, C: ");
    scanf_s("%lf %lf %lf", &A17, &B17, &C17);
    double d1 = abs(A17 * ax17 + B17 * ay17 + C17) / sqrt(A17 * A17 + B17 * B17);
    double d2 = abs(A17 * bx17 + B17 * by17 + C17) / sqrt(A17 * A17 + B17 * B17);
    printf("Відстань від M1: %.2f, від M2: %.2f\n", d1, d2);

    // 18 Фокальні радіуси точки на еліпсі
    double ex18, ey18, ec18;
    printf("Введіть координати точки M(x,y) та число c: ");
    scanf_s("%lf %lf %lf", &ex18, &ey18, &ec18);
    double F1M = sqrt(pow(ex18 + ec18, 2) + ey18 * ey18);
    double F2M = sqrt(pow(ex18 - ec18, 2) + ey18 * ey18);
    printf("F1M = %.2f, F2M = %.2f\n", F1M, F2M);

    // 19 Вектори
    double vx1, vy1, vx2, vy2;
    printf("Введіть координати вектора a(x,y): ");
    scanf_s("%lf %lf", &vx1, &vy1);
    printf("Введіть координати вектора b(x,y): ");
    scanf_s("%lf %lf", &vx2, &vy2);
    // У формулі на фото помилка (y1+x2), зазвичай це x1*x2 + y1*y2
    double dot_product = vx1 * vx2 + vy1 * vy2; 
    double mod_a = sqrt(vx1 * vx1 + vy1 * vy1);
    double mod_b = sqrt(vx2 * vx2 + vy2 * vy2);
    printf("Скалярний добуток = %.2f, |a| = %.2f, |b| = %.2f\n", dot_product, mod_a, mod_b);

    // 20 Рівносторонній трикутник
    double side_a20;
    printf("Введіть сторону a: ");
    scanf_s("%lf", &side_a20);
    double S20 = (pow(side_a20, 2) * sqrt(3)) / 4.0;
    double r20 = (side_a20 * sqrt(3)) / 6.0;
    double R20 = (side_a20 * sqrt(3)) / 3.0;
    printf("S = %.2f, r = %.2f, R = %.2f\n", S20, r20, R20);

    // 21 Круг
    double R21;
    printf("Введіть радіус R: ");
    scanf_s("%lf", &R21);
    printf("S = %.2f, l = %.2f\n", M_PI * R21 * R21, 2 * M_PI * R21);

    // 22 Площа за Героном та вписане коло
    double a22, b22, c22;
    printf("Введіть сторони a, b, c: ");
    scanf_s("%lf %lf %lf", &a22, &b22, &c22);
    double p22 = (a22 + b22 + c22) / 2.0;
    double S22 = sqrt(p22 * (p22 - a22) * (p22 - b22) * (p22 - c22));
    double r22 = S22 / p22;
    printf("S = %.2f, r = %.2f\n", S22, r22);

    // 23 Висота та медіана на сторону c
    double a23, b23, c23;
    printf("Введіть сторони трикутника a, b, c: ");
    scanf_s("%lf %lf %lf", &a23, &b23, &c23);
    double p23 = (a23 + b23 + c23) / 2.0;
    double hc23 = (2 * sqrt(p23 * (p23 - a23) * (p23 - b23) * (p23 - c23))) / c23;
    double mc23 = sqrt(2 * pow(a23, 2) + 2 * pow(b23, 2) - pow(c23, 2)) / 2.0;
    printf("Висота hc = %.2f, Медіана mc = %.2f\n", hc23, mc23);

    // 24 Октаедр (Об'єм та Площа)
    double a24;
    printf("Введіть сторону октаедра a: ");
    scanf_s("%lf", &a24);
    double V24 = (pow(a24, 3) * sqrt(2)) / 3.0;
    double S24 = 2 * pow(a24, 2) * sqrt(3);
    printf("Об'єм V = %.2f, Площа S = %.2f\n", V24, S24);

    // 25 Октаедр (Радіуси сфер)
    double a25;
    printf("Введіть сторону октаедра a: ");
    scanf_s("%lf", &a25);
    double R25 = (a25 * sqrt(2)) / 2.0;
    double r25 = (a25 * sqrt(6)) / 6.0;
    printf("Описана сфера R = %.2f, Вписана сфера r = %.2f\n", R25, r25);

    // 26 Бісектриси (варіант 1)
    double a26, b26, c26;
    printf("Введіть сторони a, b, c: ");
    scanf_s("%lf %lf %lf", &a26, &b26, &c26);
    double p26 = (a26 + b26 + c26) / 2.0;
    double la26 = (2 * sqrt(b26 * c26 * p26 * (p26 - a26))) / (b26 + c26);
    double lb26 = (2 * sqrt(a26 * c26 * p26 * (p26 - b26))) / (a26 + c26);
    double lc26 = (2 * sqrt(a26 * b26 * p26 * (p26 - c26))) / (a26 + b26);
    printf("Бісектриси: la = %.2f, lb = %.2f, lc = %.2f\n", la26, lb26, lc26);

    // 27 Бісектриси (варіант 2)
    double a27, b27, c27;
    printf("Введіть сторони a, b, c: ");
    scanf_s("%lf %lf %lf", &a27, &b27, &c27);
    double la27 = sqrt(b27 * c27 * (pow(b27 + c27, 2) - pow(a27, 2))) / (b27 + c27);
    double lb27 = sqrt(a27 * c27 * (pow(a27 + c27, 2) - pow(b27, 2))) / (a27 + c27);
    double lc27 = sqrt(a27 * b27 * (pow(a27 + b27, 2) - pow(c27, 2))) / (a27 + b27);
    printf("Бісектриси: la = %.2f, lb = %.2f, lc = %.2f\n", la27, lb27, lc27);

    // 28 Рівносторонній трикутник
    double a28;
    printf("Введіть сторону a: ");
    scanf_s("%lf", &a28);
    double r28 = (a28 * sqrt(3)) / 6.0;
    double R28 = 2 * r28;
    double S28 = (pow(a28, 2) * sqrt(3)) / 4.0;
    printf("Радіуси: r = %.2f, R = %.2f, Площа S = %.2f\n", r28, R28, S28);

    // 29 Рівнобедрений трикутник
    double a29, b29;
    printf("Введіть основу a та бічну сторону b: ");
    scanf_s("%lf %lf", &a29, &b29);
    double h29 = sqrt(4 * b29 * b29 - a29 * a29) / 2.0;
    double S29 = (a29 * h29) / 2.0;
    double r29 = (a29 * sqrt(4 * b29 * b29 - a29 * a29)) / (2 * (2 * b29 + a29));
    double R29 = (b29 * b29) / sqrt(4 * b29 * b29 - a29 * a29);
    printf("h = %.2f, S = %.2f, r = %.2f, R = %.2f\n", h29, S29, r29, R29);

    // 30 Рівнобедрений прямокутний трикутник
    double c30;
    printf("Введіть гіпотенузу c: ");
    scanf_s("%lf", &c30);
    double side30 = (c30 * sqrt(2)) / 2.0;
    double S30 = pow(c30, 2) / 4.0;
    printf("Катети a = b = %.2f, Площа S = %.2f\n", side30, S30);

		// 4 варіант
		// 1
    int a1;
    double b1;
    cout << "Введіть a (ціле) та b (з плаваючою крапкою): ";
    cin >> a1 >> b1;
    double x = (0.4 + 8 * (5 - b1) - 5 * 2.0 / 1) + (a1 + 8 - (8.9 - 2.6 * 2.0/3)) * 3.4;
    cout << "Значення x = " << x << endl;
		// 2
    int x1, y1, z1;
    cout << "Введіть три цілі числа: ";
    cin >> x1 >> y1 >> z1;
    int product = x1 * y1 * z1;
    cout << "Добуток = " << product << endl;
    --x1; --y1; --z1;
    double average = (x1 + y1 + z1) / 3.0;
    cout << "Середнє арифметичне після зменшення на 1 = " << average << endl;
		// 3
    cout << "i | 2*i | 3*i\n";
    cout << "---------------\n";
    for (int i = 1; i <= 8; ++i) {
        cout << i << " | " << 2*i << " | " << 3*i << endl;
    }

    return 0;
}
