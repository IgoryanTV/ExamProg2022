#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::ifstream in;
    std::ofstream out;
    std::string buf;
    std::string temp;

    in.open("in.txt");
    out.open("out.txt");

    if (!in.is_open())
    {
        std::cerr << "Файл не существует или не может быть открыт!" << std::endl;

        system("pause");
        return 1;
    }

    while (std::getline(in, buf))
    {
        temp = buf;

        for (int i = 0; i < buf.size() - 1; i++) 
        {
            temp[i] = buf[buf.size() - 1 - i]; 
        }

        out << temp << std::endl; // Запись перевернутой строки
    }

    in.close();

    system("pause");
    return 0;
}