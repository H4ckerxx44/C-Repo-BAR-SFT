#include <stdio.h>
#include <stdlib.h>


int number_printing()
{
    int num = 0;

    while (num < 100)
    {
        if (num < 88)
        {
            printf("%d\n", num);
            num++;
        }

        if (num == 69)
        {
            printf("nice, %d\n", num);
            num++;
        }

        if (num == 88)
        {
            printf("good ol' times, lol, %d\n", num);
            num++;
        }
        if (num > 88)
        {
            printf("%d\n", num);
            num++;
        }
    }
}