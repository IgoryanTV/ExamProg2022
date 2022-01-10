#include <iostream>
#include <Windows.h>
#include <cmath>

bool isPrime(int n, int i = 2)
{
    if (n <= 2)
    {
        return ((n == 2) ? true : false);
    }
        
    if (n % i == 0)
    {
        return false;
    }
        
    if (i * i > n)
    {
        return true;
    }
        
    return isPrime(n, i + 1);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    int m;

    std::cin >> n >> m;

    if (isPrime(n) && isPrime(m))
    {
        if (abs(n - m) == 2)
        {
            std::cout << "Числа " << n << " и " << m << " близнецы." << std::endl;
        }
        else
        {
            std::cout << "Числа " << n << " и " << m << " не близнецы." << std::endl;
        }
    }
    else
    {
        std::cout << "Число " << n << " или " << m << " не простое." << std::endl;
    }

    system("pause");
    return 0;
}