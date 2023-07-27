#include <iostream>
using namespace std;
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
    cout << "Enter character to be transmitted: ";
    cin >> input;

    index = input - 'A';
    ch_tx = map_table[index];

    cout << "Character transmitted is " << ch_tx << endl;

    // Receiver
    ch_rx = ch_tx;
    cout << "Character received is " << ch_rx << endl;

    // Search for ch_rx in table and get index
    for (n = 0; n < 26; n++)
    {
        if (ch_rx == map_table[n])
        {
            break;
        }
    }

    char decrypt = 'A' + n;
    cout << "Decrypted char is " << decrypt<< endl;
    return 0;
}