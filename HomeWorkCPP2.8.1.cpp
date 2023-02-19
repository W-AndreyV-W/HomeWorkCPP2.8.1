#include <iostream>
#include <windows.h>

int function(std::string& str, int& forbidden_length) {
    if (forbidden_length == str.length()) {
        return 0;
    }
    else {
        return str.length();
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string str;
    int forbidden_length = 0, bad_length = 0;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    do {
        std::cout << "Введите слово: ";
        std::cin >> str;
        bad_length = function(str, forbidden_length);
        if (bad_length != 0) {
            std::cout << "Длина слова " << '"' << str << '"' << " равна " << bad_length << std::endl;
        }
    } while (bad_length != 0);
    std::cout << "Вы ввели слово запретной длины! До свидания" << std::endl;
}