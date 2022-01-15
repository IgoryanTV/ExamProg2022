#include <iostream>
#include <Windows.h>
#include <cmath>
#include <time.h>

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

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int max = INT_MIN;
    int arr[500];

    std::cin >> arr[0];

    for (int i = 1; arr[i] != 0; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 1; arr[i] != 0; i++)
    {
        if (arr[i] > max && !isPrime(arr[i]))
        {
            max = arr[i];
        }
    }

    std::cout << max << std::endl;

    system("pause");
    return 0;
}
