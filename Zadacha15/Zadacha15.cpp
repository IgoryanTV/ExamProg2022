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
    int countA = 0;
    int countB = 0;

    std::cin >> n;
    std::cout << "Введите а и б: ";
    std::cin >> a >> b;

    int* arr = new int[n];

    genArray(n, -100, 100, arr);
    showArray(1, arr);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > a)
        {
            countA++;
        }
        else if (arr[i] < b)
        {
            countB++;
        }
    }

    std::cout << "Больше a: " << countA << std::endl;
    std::cout << "Больше б: " << countB << std::endl;

    system("pause");
    return 0;
}