#include <iostream>

int main()
{
    char ch;
    std::cout << "Enter alphabet: ";
    std::cin >> ch;

    switch (ch)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            std::cout << ch << " is a vowel" << std::endl;
            break;

        default:
            std::cout << ch << " is a consonant" << std::endl;
            break;
    }

    return 0;
}
