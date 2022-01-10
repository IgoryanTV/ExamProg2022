#include <iostream>
#include <Windows.h>
#include <cmath>

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

void genArray(int n, int a, int b, int *m)
{
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        m[i] = rand() % (b - a + 1) + a;
    }
}

void showArray(int n, int *m)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << m[i] << " ";
    }
    std::cout << std::endl;
}

int sum_cif(int digit)
{
    int sum = 0;

    while (digit != 0)
    {
        sum += digit % 10;
        digit /= 10;
    }

    return sum;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    int count = 0;

    std::cin >> n;

    int* arr = new int[n];
    int* res = new int[n];

    genArray(n, 100, 200, arr);
    showArray(n, arr);

    for (int i = 0; i < n; i++)
    {
        if (isPrime(sum_cif(i)))
        {
            res[i] = i;
            count++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << res[i] << std::endl;
    }

    delete[] arr;
    delete[] res;

    system("pause");
    return 0;
}