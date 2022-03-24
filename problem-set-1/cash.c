#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float change = get_float("Change owed: ");
    
    //if not positive number, prompt the user again
    while (!(change >= 0))
    {
        change = get_float("Change owed: ");
    }
    int cents = round(change * 100);
    
    //store the number of coins
    int coins = 0;
     
    while (cents >= 0)
    {
        if (cents >= 25)
        {
            //add a coin of 25
            cents = cents - 25;
            coins++;
            continue;
        }
        else if (cents >= 10)
        {
            //add a coin of 10
            cents = cents - 10;
            coins++;
            continue;
        }
        else if (cents >= 5)
        {
            //add a coin of 5
            cents = cents - 5;
            coins++;
            continue;
        }
        else if (cents >= 1)
        {
            //add a coin of 1
            cents = cents - 1;
            coins++;
            continue;
        }
        else
        {
            //just in case the loop goes forever
            break;
        }
    }

    printf("%i\n", coins);
    
}