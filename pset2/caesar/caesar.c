#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

string encipher(string plain, int key);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int key = 0;

        //checks the numericality of argv[1]
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }

        key = atoi(argv[1]);

        string plainText = get_string("plaintext: ");

        printf("ciphertext: %s\n", encipher(plainText, key));

        return 0;
    }

    printf("Usage: ./caesar key\n");
    return 1;
}

string encipher(string plain, int key)
{
    int displace = 65;
    for (int i = 0, n = strlen(plain); i < n; i++)
    {

        if (!isalpha(plain[i]))
        {
            continue;
        }

        if (isupper(plain[i]))
        {
            //adjusts the displace to point to the uppercase A
            displace = 'A';
        }
        else
        {
            //adjusts the displace to point to the lowercase a
            displace = 'a';
        }
        //converts the plain character to the cipher character
        plain[i] = (plain[i] + key - displace) % 26 + displace;
    }
    return plain;
}