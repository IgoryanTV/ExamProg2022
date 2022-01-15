#include <iostream>
#include <Windows.h>
#include <cmath>
#include <time.h>

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

    int a;
    int b;
    int n;
    int count = 0;

    std::cin >> n;
    std::cout << "Введите a и b: ";
    std::cin >> a >> b;

    int* arr = new int[n];

    genArray(n, -100, 100, arr);
    showArray(1, arr);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > a && arr[i] < b)
        {
            count++;
        }
    }

    std::cout << "Результат: " << count << std::endl;

    system("pause");
    return 0;
}