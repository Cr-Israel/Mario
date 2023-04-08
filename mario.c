#include <cs50.h>
#include <stdio.h>

int first_size = 0;

int main(void)
{
    do
    {
        printf("Height:  ");
        first_size = get_int("");
    }
    while (first_size < 1 || first_size > 8);

    for (int i = 0; i < first_size; i++)
    //This loop iterates over the number equal to the height of the pyramid (given by the value of first_size).
    {
        for (int j = 0; j < first_size - i - 1; j++)
        //The inner loop runs every iteration of the outer loop and prints out the necessary whitespace before printing the "#" blocks of the pyramid.
        {
            printf(" ");
        }

        for (int k = 0; k <= i; k++)
        //The second inner loop is responsible for printing the "#" blocks corresponding to each line of the pyramid.
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}