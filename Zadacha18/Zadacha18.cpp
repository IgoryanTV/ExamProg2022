#include <iostream>
#include <Windows.h>
#include <cmath>
#include <time.h>

void gen(int n, int m, int** M, int left, int right)
{
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            M[i][j] = rand() % (right - left) + left;
        }
    }
}

int del_sum(int a)
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

void viewMatrix(int n, int m, int** M)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << M[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    int result = 0;

    std::cin >> n;

    int** matrix = new int* [n];

    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[n];
    }

    gen(n, n, matrix, -100, 100);
    viewMatrix(n, n, matrix);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (del_sum(matrix[i][j]) == matrix[i][j] && matrix[i][j] != 1)
            {
                result += matrix[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }

    std::cout << result << std::endl;

    system("pause");
    return 0;
}