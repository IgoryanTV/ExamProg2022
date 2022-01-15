#include <iostream>
#include <Windows.h>
#include <time.h>
#include <cmath>

void gen(int n, int m, int** M,int left, int right) // Функция для генерации массива
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

    int** matrix = new int*[n]; // Создание двумерного массива

    for (int i = 0; i < n; i++) // Создание двумерного массива
    {
        matrix[i] = new int[m]; // Создание двумерного массива
    }

    gen(n, m, matrix, 0, 100);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            temp += matrix[i][j];
        }
    }

    temp /= n * m; // Подсчет среднего арифметического двумерного массива

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] > temp)
            {
                count++; // Подсчет количества элементов больших temp
            }
        }
    }

    std::cout << count << std::endl; // Удаление двумерного массива

    for (int i = 0; i < n; i++) // Удаление двумерного массива
    {
        delete[] matrix[i]; // Удаление двумерного массива
    }

    system("pause");
    return 0;
}