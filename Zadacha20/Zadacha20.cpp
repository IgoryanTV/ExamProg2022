#include <iostream>
#include <Windows.h>
#include <cmath>
#include <time.h>

bool isPrime(int n, int d) // Рекурсивная функция проверки числа на простоту
{
    if (d == 1)
    {
        return true;
    } 
    else 
    {
        if (n % d == 0) 
        {
            return false;
        }
        else
        {
            return isPrime(n, d - 1);
        }
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;

    std::cin >> n;

    if (isPrime(n, n-1))
    {
        std::cout << "Простое." << std::endl;
    }
    else
    {
        std::cout << "Не простое." << std::endl;
    }

    system("pause");
    return 0;
}