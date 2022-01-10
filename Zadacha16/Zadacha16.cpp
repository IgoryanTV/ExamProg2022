#include <iostream>
#include <Windows.h>
#include <cmath>
#include <time.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int max = INT_MIN;
    int arr[500];

    for (int i = 0; i != 0; i++)
    {
        std::cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    std::cout << max << std::endl;

    system("pause");
    return 0;
}
