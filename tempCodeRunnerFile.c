//how to print random number in c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char i[2];
    srand(time(NULL));
    for (i = 0; i < 120; i++)
    {
        printf("%c\n", rand());
    }
    return 0;
}