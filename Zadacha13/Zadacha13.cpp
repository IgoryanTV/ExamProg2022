#include <iostream>
#include <Windows.h>
#include <cmath>

long long minus_p(int a, int b) // Рекурсивая функция для вычитания
{
    if (b == 0) return a;
    else return minus_p(a - 1, b - 1);
}

long long del(int a, int b) // Рекурсивая функция для деления (Целая часть)
{
    if (a < b) return 0;
    if (b == 0) return a;
    else return (del(minus_p(a, b), b) + 1);
}

double del(double a, double b) // Рекурсивая функция для деления (Дробная часть)
{
    if (a < b) return a;
    else return del(minus_p(a, b), b);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    int b;

    std::cout << "Введите a и b: ";
    std::cin >> a >> b;

    std::cout << "Вычитание: " << minus_p(a, b) << std::endl;

    std::cout << "Введите a и b: ";
    std::cin >> a >> b;

    std::cout << "Деление: " << del(a, b) << " остаток: " << del((double)a, (double)b) << std::endl;

    system("pause");
    return 0;
}