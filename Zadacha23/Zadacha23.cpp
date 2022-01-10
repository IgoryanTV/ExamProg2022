#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::ifstream in;
    std::ofstream out;
    std::string str;
    int k;
    int temp = 0;
    char ch;

    std::cout << "Введите количество символов: ";
    std::cin >> k;

    std::cout << "Введите символ: ";
    std::cin >> ch;

    in.open("input.txt");

    if (!in.is_open()) // если файл не открыт
    {
        std::cerr << "Файл не может быть открыт!\n";
        return 1;
    }

    out.open("output.txt");

    while (getline(in, str))
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == ch)
            {
                temp++;
            }
        }

        if (k == temp)
        {
            out << str;
        }

        temp = 0;
    }

    in.close();
    out.close();

    system("pause");
    return 0;
}