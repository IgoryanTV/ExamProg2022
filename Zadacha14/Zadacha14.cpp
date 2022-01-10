#include <iostream>
#include <Windows.h>
#include <cmath>

long long plus_p(int a, int b)
{
    if (b == 0) return a;
    else return plus_p(a + 1, b - 1);
}

long long increase_m(int a, int b)
{
    if (b == 0) return 0;
    else return plus_p(a, increase_m(a, b - 1));
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    int b;

    std::cout << "Введите a и b: ";
    std::cin >> a >> b;

    std::cout << "Сложение: " << plus_p(a, b) << std::endl;

    std::cout << "Введите a и b: ";
    std::cin >> a >> b;

    std::cout << "Умножение: " << increase_m(a, b) << std::endl;

    system("pause");
    return 0;
}