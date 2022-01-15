#include <iostream>
#include <Windows.h>
#include <cmath>

bool isPrime(unsigned int n) // Функция проверки числа на простоту
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

    int a;
    int b;
    int temp;
    int j = 0; // Счетчик количества простых чисел

    std::cin >> a >> b;

    if (a > b)
    {
        temp = a;
        a = b;
        b = a;
    }

    long *arr = new long[b / 2]; // Массив для сохранения простых чисел

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            arr[j] = i;
            j++;
        }
    }

    if (j == 0)
    {
        std::cout << "На промежутке нет простых чисел!";
    }
    else
    {
        for (int i = 0; i < j; i++)
        {
            std::cout << arr[i] << " ";
        }
    }

    std::cout << std::endl;

    delete[] arr;

    system("pause");
    return 0;
}