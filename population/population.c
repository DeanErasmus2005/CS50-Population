#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // TODO: Prompt for start size
    int n;
    do
    {
        n = get_int("Start size: " );
    }
    while (n < 9);

    // TODO: Prompt for end size
    int m;
    do
    {
       m = get_int("End size: " );
    }
    while (m < n);
    // TODO: Calculate number of years until we reach threshold

    int counter = 0;

    while (n < m)
    {

      counter = counter + 1;


      n = n + round(n / 3) - round(n / 4);

    }

    // do
    // {

    //   counter = counter + 1;


    //   n = n + round(n / 3) - round(n / 4);

    // }
    // while (n < m);

    // for (int i; n < m; n++)
    // {
    //     n = n + (n / 3) - (n / 4);
    // }
    // TODO: Print number of years
    printf("Years: %i", counter);
}
