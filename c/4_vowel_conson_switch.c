#include<stdio.h>
int main()
{
    char ch;
    printf("Enter alphabet : ");
    scanf("%c", &ch);
    switch(ch)
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
        printf("%c is a vowel\n",ch);
        break;

        default:
        printf("%c is consonant\n",ch);
        break;
    }
    return 0;
}