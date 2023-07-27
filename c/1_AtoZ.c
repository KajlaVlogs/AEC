#include <stdio.h>

int main()
{
    char map_table[26];
    char input, ch_tx, ch_rx;
    int index, n;

    // Initialize map_table with 'Z' to 'A'
    for (n = 0; n < 26; n++)
    {
        map_table[n] = 'Z' - n;
    }

    // Transmitter
    printf("Enter character to be transmitted: ");
    scanf(" %c", &input); // Note the space before %c to consume the newline character

    index = input - 'A';
    ch_tx = map_table[index];

    printf("Character transmitted is %c\n", ch_tx);

    // Receiver
    ch_rx = ch_tx;
    printf("Character received is %c\n", ch_rx);

    // Search for ch_rx in table and get index
    for (n = 0; n < 26; n++)
    {
        if (ch_rx == map_table[n])
        {
            break;
        }
    }

    printf("Decrypted char is %c\n", 'A' + n);
    return 0;
}
