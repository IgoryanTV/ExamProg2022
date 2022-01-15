#include <iostream>
#include <Windows.h>
#include <cmath>
#include <time.h>

int del_sum(int a) // Сумма делителей
{
    int sum = 1;
    for (int i = 2; i <= a / i; i++)
    {
        if (a % i == 0)
        {
            if (i != a / i) sum += i + a / i;
            else sum += i;
        }
    }
    return sum;
}

bool isPrime(unsigned int n)
{
    bool f = true;
    int d = 3;

    if ((n % 2 == 0 && n != 2) || (n == 1))
    {
        f = false;
    }
    else
    {
        while (d <= sqrt((double)n) && (f == 1))
        {
            if (n % d == 0)
            {
                f = false;
            }
            else
            {
                d += 2;
            }
        }
        return f;
    }
}

void genArray(int n, int a, int b, int* m)
{
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        m[i] = rand() % (b - a + 1) + a;
    }
}

void showArray(int n, int* m)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << m[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    int count = 0;

    std::cin >> n;

    int *arr = new int[n];

    genArray(n, -100, 100, arr);
    showArray(n, arr);

    for (int iterator = 0; iterator < n; iterator++)
    {
        if (isPrime(del_sum(abs(arr[iterator])))) // Проверка модуля суммы делителей числа на простоту
        {
            count++;
        }
    }

    std::cout << count << std::endl;

    system("pause");
    return 0;
}