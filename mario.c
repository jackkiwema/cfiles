#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n;
    do
    {
        //prompt user for input
        n = get_int("Height: ");
    }
    //enter between 1 - 8
    while (n < 1 || n > 8);

    //Create a nested loop for (spaces) and (hashes)

    for (int i = 0; i < n; i++)
    {
        //Create inverted (spaces) left aligned pyramid
        for (int j = n - i; j > 1; j--)
        {
            printf(" ");

        }
        //create left aligned pyramid nested
        for (int k = 0; k <= i; k++)
        {

            printf("#");

        }
        printf("\n");
    }
}
