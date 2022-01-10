#include <iostream>
#include <Windows.h>
#include <cmath>
#include <time.h>

void genArray(int n, int a, int b, float* m)
{
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        m[i] = rand() / (b - a + (float)1) + a;
    }
}

void showArray(int n, float* m)
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
    bool isTrue = true;

    std::cin >> n;

    float* arr = new float[n];

    genArray(n, -100, 100, arr);
    showArray(n, arr);

    for (int iterator = 1; iterator < n; iterator++)
    {
        isTrue = true;
        for (int j = 0; j < iterator; j++)
        {
            if (arr[j] > arr[iterator])
            {
                isTrue = false;
                break;
            }
        }
        if (isTrue)
        {
            count++;
        }
    }

    std::cout << count << std::endl;

    delete[] arr;

    system("pause");
    return 0;
}