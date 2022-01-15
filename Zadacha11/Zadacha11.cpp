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
    std::string long_word;
    std::string short_word;
    size_t max_len = 0; // Можно unsigned int
    size_t min_len = 10000; // Можно unsigned int

    in.open("in.txt");

    if (!in.is_open())
    {
        std::cerr << "Файл не существует или не может быть открыт!" << std::endl;

        system("pause");
        return 1;
    }

    while (std::getline(in, buf))
    {
        if (buf.size() < min_len)
        {
            short_word = buf;
            min_len = short_word.size();
        }

        if (buf.size() > max_len)
        {
            long_word = buf;
            max_len = long_word.size();
        }
    }

    in.close();

    std::cout << short_word << std::endl;
    std::cout << long_word << std::endl;

    system("pause");
    return 0;
}