#include <iostream>
#include <Windows.h>
#include <cmath>

long long cache[1000];

long long fib(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else if (cache[a] != 0)
    {
        return cache[a];
    }
    else
    {
        cache[a] = fib(a - 1) + fib(a - 2);
        return cache[a];
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    long n;
    int i = 0;
    long long temp = fib(0);
    bool isFib = false;

    std::cin >> n;

    while (temp <= n)
    {
        i++;
        temp = fib(i);

        if (temp == n)
        {
            isFib = true;
            break;
        }
    }

    if (isFib)
    {
        std::cout << "Число " << n << " входит в последовательность Фибоначчи" << std::endl;
    }
    else
    {
        std::cout << "Число " << n << " не входит в последовательность Фибоначчи" << std::endl;
    }

    system("pause");
    return 0;
}