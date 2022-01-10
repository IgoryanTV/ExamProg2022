#include <iostream>
#include <Windows.h>
#include <cmath>

struct test
{
    int digit;
    int countDel;
};

int del_count(int chislo)
{
    int count = 2;

    for (int i = 2; i <= chislo / i; i++)
    {
        if (chislo % i == 0)
        {
            if (i != chislo / i)
            {
                count += 2;
            }
            else 
            { 
                count += 1; 
            }
        }
    }
    return count;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    int b;
    int temp;
    int j = 0;

    std::cin >> a >> b;

    if (a > b)
    {
        temp = a;
        a = b;
        b = a;
    }

    test* arr = new test[b - a];

    for (int i = a; i < b; i++)
    {
        arr[j].digit = i;
        arr[j].countDel = del_count(i);

        std::cout << arr[j].digit << ": " << arr[j].countDel << std::endl;

        j++;
    }

    delete[] arr;

    system("pause");
    return 0;
}