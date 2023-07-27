#include <iostream>

int main()
{
    char ch;
    std::cout << "Enter alphabet: ";
    std::cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        std::cout << ch << " is a vowel" << std::endl;
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        std::cout << ch << " is a consonant" << std::endl;
    }
    else
    {
        std::cout << "Not an alphabet" << std::endl;
    }
    return 0;
}
