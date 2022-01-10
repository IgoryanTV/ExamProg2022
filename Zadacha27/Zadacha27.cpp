#include <iostream>
#include <Windows.h>
#include <cmath>
#include <time.h>
#include <vector>

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
    int count = 0;
    std::vector<int> res;

    std::cin >> n;

    int** matrix = new int* [n];

    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[n];
    }

    gen(n, n, matrix, -100, 100);
    viewMatrix(n, n, matrix);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (isPrime(matrix[i][j]))
            {
                count++;
                res.push_back(matrix[i][j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }

    for (int i = 0; i < res.size(); i++)
    {
        std::cout << res[i] << " ";
    }

    std::cout << std::endl << count << std::endl;

    system("pause");
    return 0;
}