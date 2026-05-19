#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

#define pi 3.14159  // константа pi



// об'єм циліндра
float CylinderVolume(float r, float h) {
    return pi * r * r * h;
}

// площа бічної поверхні
float CylinderSide(float r, float h) {
    return 2 * pi * r * h;
}

// повна площа поверхні
float CylinderFull(float r, float h) {
    return 2 * pi * r * (h + r);
}

// об'єм кулі
float SphereVolume(float r) {
    return (4.0 / 3.0) * pi * r * r * r;
}

// площа поверхні кулі
float SphereSurface(float r) {
    return 4 * pi * r * r;
}

// об'єм конуса
float ConeVolume(float r, float h) {
    return (1.0 / 3.0) * pi * r * r * h;
}

// бічна поверхня конуса
float ConeSide(float r, float h) {
    float l = sqrt(r * r + h * h); // утворююча
    return pi * r * l;
}

// функція введення радіуса і висоти (через посилання)
void Input_func(float& r, float& h) {
    cout << "Введiть радiус: ";
    cin >> r;
    cout << "Введiть висоту: ";
    cin >> h;
}

// введення тільки радіуса
void InputR(float& r) {
    cout << "Введiть радiус: ";
    cin >> r;
}

// функція виводу результату
void Output_func(float result) {
    cout << "Результат = " << result << endl;
}

// функція меню
int Menu() {
    int choice;

    cout << "\n===== МЕНЮ =====\n";
    cout << "1 - Цилiндр\n";
    cout << "2 - Куля\n";
    cout << "3 - Конус\n";
    cout << "0 - Вихiд\n";
    cout << "Ваш вибiр: ";

    cin >> choice;
    return choice;
}

int main() {
    SetConsoleCP(1251);        // українська мова
    SetConsoleOutputCP(1251);

    int choice;

    // цикл для повторного використання програми
    do {
        choice = Menu();

        float r, h;

        switch (choice) {

        case 1: { // ЦИЛІНДР
            int op;

            Input_func(r, h);  // вводимо дані

            cout << "\n1 - Об'єм\n";
            cout << "2 - Бiчна поверхня\n";
            cout << "3 - Повна поверхня\n";
            cout << "Ваш вибiр: ";
            cin >> op;

            if (op == 1)
                Output_func(CylinderVolume(r, h));
            else if (op == 2)
                Output_func(CylinderSide(r, h));
            else if (op == 3)
                Output_func(CylinderFull(r, h));

            break;
        }

        case 2: { // КУЛЯ
            int op;

            InputR(r);  // вводимо тільки радіус

            cout << "\n1 - Об'єм\n";
            cout << "2 - Площа поверхнi\n";
            cout << "Ваш вибiр: ";
            cin >> op;

            if (op == 1)
                Output_func(SphereVolume(r));
            else if (op == 2)
                Output_func(SphereSurface(r));

            break;
        }

        case 3: { // КОНУС
            int op;

            Input_func(r, h);

            cout << "\n1 - Об'єм\n";
            cout << "2 - Бiчна поверхня\n";
            cout << "Ваш вибiр: ";
            cin >> op;

            if (op == 1)
                Output_func(ConeVolume(r, h));
            else if (op == 2)
                Output_func(ConeSide(r, h));

            break;
        }

        case 0:
            cout << "Вихiд з програми...\n";
            break;

        default:
            cout << "Невiрний вибiр!\n";
        }

    } while (choice != 0); // повтор поки не натиснуть 0

    return 0;
}