#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <windows.h>
using namespace std;
void task1() { // #1
    cout << "Послідовність:\n";
    int i = 266;
    do {
        cout << i << " ";
        i -= 38;
    } while (i >= 0);
    cout << endl;
}
void task2() { // #2
    cout << "x\t y\n";
    double x = 0;
    do {
        double y = (3 * x - 2) / (x * x + 1);
        cout << fixed << setprecision(2) << x << "\t" << y << endl;
        x += 0.5;
    } while (x <= 4.0);
}
void task3() { // #3
    int A, B;
    cout << "Введіть A і B: ";
    cin >> A >> B;

    int start = min(A, B);
    int end = max(A, B);

    int count = 0;

    while (start <= end) {
        cout << start << " ";
        count++;
        start++;
    }

    cout << "\nКількість чисел: " << count << endl;
}
void task4() {  // #4
    int count = 0;

    for (int i = 111111; i <= 999999; i++) {
        int a = i / 100000;
        int b = (i / 10000) % 10;
        int c = (i / 1000) % 10;
        int d = (i / 100) % 10;
        int e = (i / 10) % 10;
        int f = i % 10;

        int sum1 = a + b + c;
        int sum2 = d + e + f;

        if (sum1 == sum2 && sum1 == 13) {
            count++;
        }
    }

    cout << "Кількість щасливих квитків: " << count << endl;
}
struct Student {  // #5
    string fio;
    int kurs;
    string grupa;
    double sr_bal;
    char stip;
};
void task5() {
    Student students[5];

    for (int i = 0; i < 5; i++) {
        cout << "\nСтудент #" << i + 1 << endl;

        cout << "ПІБ: ";
        cin.ignore();
        getline(cin, students[i].fio);

        cout << "Курс: ";
        cin >> students[i].kurs;

        cout << "Група: ";
        cin >> students[i].grupa;

        double sum = 0;
        cout << "Введіть оцінки з 3 предметів:\n";
        for (int j = 0; j < 3; j++) {
            double grade;
            cin >> grade;
            sum += grade;
        }

        students[i].sr_bal = sum / 3;

        if (students[i].sr_bal >= 4.0)
            students[i].stip = '+';
        else
            students[i].stip = '-';
    }

    // Вивід таблиці
    cout << "\n-------------------------------------------------------------\n";
    cout << "| # | FIO | kurs | grupa | Sr.bal | Stip |\n";
    cout << "-------------------------------------------------------------\n";

    for (int i = 0; i < 5; i++) {
        cout << "| " << i + 1 << " | "
            << students[i].fio << " | "
            << students[i].kurs << " | "
            << students[i].grupa << " | "
            << fixed << setprecision(2) << students[i].sr_bal << " | "
            << students[i].stip << " |\n";
    }

    // Додаткове меню
    int choice;
    cout << "\nДодаткове меню:\n";
    cout << "1 - Студенти 4 курсу\n";
    cout << "2 - Невстигаючі (Sr.bal < 3.00)\n";
    cout << "3 - Стипендія\n";
    cout << "0 - Вихід\n";

    cin >> choice;

    switch (choice) {
    case 1:
        for (int i = 0; i < 5; i++)
            if (students[i].kurs == 4)
                cout << students[i].fio << endl;
        break;

    case 2:
        for (int i = 0; i < 5; i++)
            if (students[i].sr_bal < 3.0)
                cout << students[i].fio << endl;
        break;

    case 3:
        for (int i = 0; i < 5; i++)
            if (students[i].stip == '+')
                cout << students[i].fio << endl;
        break;
    }
}

// Головне меню 
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choice;

    do {
        cout << "\n===== МЕНЮ =====\n";
        cout << "1 - Послідовність\n";
        cout << "2 - Таблиця функції\n";
        cout << "3 - Числа між A і B\n";
        cout << "4 - Щасливі квитки\n";
        cout << "5 - Студенти\n";
        cout << "0 - Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: task3(); break;
        case 4: task4(); break;
        case 5: task5(); break;
        case 0: cout << "Вихід...\n"; break;
		default: cout << "Невірний вибір!\n";
        }

    } while (choice != 0);

    return 0;
}