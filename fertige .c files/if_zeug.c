#include <stdio.h>
#include <stdlib.h>

/* main function */
int main()
{
    int num = 0;

    // while loop, wenn num < 100
    while (num < 100)
    {
        // wenn num < 88, addiere num + 1
        if (num < 88)
        {
            printf("%d\n", num);
            num++;
        }
        // wenn num = 69, gibt x aus und addiere num + 1
        if (num == 69)
        {
            printf("nice, %d\n", num);
            num++;
        }
        // wenn num = 88, gibt y aus und addiere num + 1
        if (num == 88)
        {
            printf("good ol' times, lol, %d\n", num);
            num++;
        }
        // wenn num > 88, addiere num + 1
        if (num > 88)
        {
            printf("%d\n", num);
            num++;
        }
    }
}
