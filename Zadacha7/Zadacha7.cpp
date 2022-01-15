#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::ifstream in;
    std::string buf;
    std::string result;

    in.open("in.txt");

    if (!in.is_open())
    {
        std::cerr << "Файл не существует или не может быть открыт!" << std::endl;

        system("pause");
        return 1;
    }

    while (std::getline(in, buf))
    {
        if (buf.size() > result.size()) // Поиск самой длинной строки
        {
            result = buf;
        }
    }

    in.close();

    std::cout << result << std::endl;

    system("pause");
    return 0;
}