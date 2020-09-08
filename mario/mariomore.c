#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n;
    do
    {
        //Prompt user for Height
        n = get_int("Height: ");
    }
    //Input between 1 - 100
    while (n < 1 || n > 100);

    //Create a nested loop for (spaces) and (hashes)

    for (int i = 0; i < n; i++)
    {
        //Create inverted (spaces) left aligned pyramid
        for (int j = n - i; j > 1; j--)
        {
            printf(" ");
        }
        //create left aligned #
        for (int k = 0; k <= i; k++)
        {

            printf("*");

        }
        //Create centre spaces
        for (int o = n + 2; o > n; o--)
        {
            printf(" ");

        }
        //Create right aligned #
        for (int p = n + i; p >= n; p--)
        {
            printf("*");
        }
        printf("\n");
    }
}
