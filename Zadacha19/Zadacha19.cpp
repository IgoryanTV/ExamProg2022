#include <iostream>
#include <Windows.h>
#include <cmath>
#include <time.h>
#include <string>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string stroka;
    char simv = 'b';
    int count = 0;
    int a = 0;
    int i = 0;
    float result = 0;

    std::cout << "Введите строку (в конце должна быть точка): ";
    getline(std::cin, stroka);

    if (stroka[0] != ' ') // Подсчёт первого слова
    {
        if (stroka[0] == simv)
        {
            count++;
        }
        a++;
    }

    do
    {
        if (stroka[i] == ' ' && stroka[i + 1] != ' ' && stroka[i + 1] != '.') // Подсчёт общего количества
        {
            a++;
        }
        if (stroka[i] == ' ' && stroka[i + 1] == simv) // Подсчёт количества слов на b
        {
            count++;
        }
        i++;
    } while (stroka[i] != '.');

    result = ((float)count / (float)a) * 100;

    std::cout << "Процент слов, которые начинаются с " << simv << " : " << result << "%\n";

    system("pause");
    return 0;
}