#include <iostream>
#include <Windows.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    int result = 0;
    int count = 0;
    char string1[21];

    gets_s(string1);
    
    for (int i = 0; i < strlen(string1); i++)
    {
        if (isdigit(string1[i])) // Нуууу... Проверка символа на то, что он цифра
        {
            count++;
            result += string1[i] - 48;
        }
    }

    std::cout << count << "\t" << result << std::endl;

    system("pause");
    return 0;
}