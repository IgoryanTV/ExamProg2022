#include <iostream>
#include "Windows.h"

using namespace std;

int kvadr(int n, int m)
{
    if (n == m)
    {
        return 1;
    }
    else if (n > m) 
    { 
        return kvadr(n - m, m) + 1; 
    }
    else  
    { 
        return kvadr(n, m - n) + 1;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n, m;

    cout << "Введите n и m: ";
    cin >> n >> m;

    cout << "Квадратов в прямоугольнике: " << kvadr(n, m) << endl;
}
