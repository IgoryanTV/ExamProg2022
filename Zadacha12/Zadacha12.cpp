#include <iostream>
#include <Windows.h>
#include <cmath>

long long cache[1000] = { 1 };

void divs(int n, int i = 1)
{
    if (n % i == 0)
    {
        std::cout << i << " ";
    }
    if (i == n)
    {
        return;
    }
    divs(n, ++i);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;

    std::cin >> n;

    divs(n);

    std::cout << std::endl;

    system("pause");
    return 0;
}