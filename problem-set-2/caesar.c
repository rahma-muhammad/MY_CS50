#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int key;
    //if argument number is invalid --> Exit
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //if it's valid but :::
    else
    {
        string clone = argv[1];
        int keylen = strlen(clone);
        for (int j = 0; j < keylen; j++)
        {
            //1)it contains alphabatic char --> Exit
            if (isalpha(clone[j]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        //2)it is numeric
        key = atoi(argv[1]);
        if (key <= 0)
        {
            //But negative --> Exit
            printf("Usage: ./caesar key\n");
            return 1;
        }
        else
        {
            //how to CIPHER

            string plain = get_string("plaintext: ");
            printf("ciphertext: ");
            int length = strlen(plain);
            for (int i = 0; i < length; i++)
            {
                //is it an alphabatic or special character?
                if (isalpha(plain[i]))
                {
                    int new_char = plain[i] + key;
                    if (islower(plain[i]))
                    {
                        //if key is bigger than 26, subtract (lowercase)
                        if (new_char > 122)
                        {
                            do
                            {
                                new_char -= 26;
                            }
                            while (new_char > 122);
                        }
                    }
                    else
                    {
                        //if key is bigger than 26, subtract (uppercase)
                        if (new_char > 90)
                        {
                            do
                            {
                                new_char -= 26;
                            }
                            while (new_char > 90);
                        }
                    }
                    printf("%c", new_char);
                }
                else
                {
                    printf("%c", plain[i]);
                }
            }
            printf("\n");
        }
    }
}