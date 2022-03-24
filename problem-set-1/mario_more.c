#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //the num of rows
    int num = get_int("Height : ");

    //if num is out of range, prompt the user again
    while (!(num > 0 && num <= 8))
    {
        num = get_int("Height : ");
    }
    for (int row = 1; row <= num ; row++)
    {
        int k, j ;
        //print spaces

        for (int spaces = num - row ; spaces > 0; spaces--)
        {
            printf(" ");
        }
        //print #
        for (k = row ; k > 0 ; k--)
        {
            if (k == 1)
            {
                printf("#  ");
                break;
            }
            printf("#");
        }
        //printf("  ");
        for (j = row ; j > 0 ; j--)
        {
            printf("#");
        }
        printf("\n");
    }
}