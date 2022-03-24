#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");
    int all_letters = strlen(text);
    int chars = 0;
    int words = 1;
    int sentences = 0;
    //get number of characters, words and sentences
    for (int i = 0; i < all_letters ; i++)
    {
        if (isalpha(text[i]))
        {
            chars++;
        }
        else if (isspace(text[i]))
        {
            words++;
        }
        else if (text[i] == '?' || text[i] == '!' || text[i] == '.')
        {
            sentences++;
        }
    }

    //The Coleman-Liau index
    double l = (chars * 100.0) / words;
    double s = (sentences * 100.0) / words;
    //the float one :
    double index = (0.0588 * l) - (0.296 * s) - 15.8;
    //the double one :
    double rounded = round(index);

    //print the grade
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (rounded >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.f\n", rounded);
    }
}