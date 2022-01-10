#include <iostream>
#include <Windows.h>
#include <time.h>
#include <cmath>

void gen(int n, int m, int** M,int left, int right)
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

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    int m;
    int temp = 0;
    int count = 0;

    std::cin >> n >> m;

    int** matrix = new int*[n];

    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[m];
    }

    gen(n, m, matrix, 0, 100);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            temp = matrix[i][j];
        }
    }

    temp /= n * m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] > temp)
            {
                count++;
            }
        }
    }

    std::cout << count << std::endl;

    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }

    system("pause");
    return 0;
}