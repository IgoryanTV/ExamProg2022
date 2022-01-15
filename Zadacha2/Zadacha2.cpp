#include <iostream>
#include <Windows.h>
#include <cmath>
#include <fstream>
#include <string>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::ifstream in;
    std::ofstream out;
    std::string buf;
    int i = 0;

    in.open("in.txt");
    out.open("out.txt");

    if (!in.is_open() || !out.is_open())
    {
        std::cout << "Файл не может быть открыт или создан\n";
        return 1;
    }

    while (std::getline(in, buf)) // Запись строки в буфер
    {
        out << buf; // Запись строки в файл

        if (i > buf.size()) // Номер строки больше самой строки
        {
            out << buf;
        }
        else
        {
            for (int j = buf.size() - i; j < buf.size(); j++) // Дополнение записаной строки j символами с i символа
            {
                out << buf[j];
            }
        }

        out << std::endl;

        buf.clear();
        i++;
    }

    in.close();
    out.close();

    system("pause");
    return 0;
}