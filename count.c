// #include <stdio.h>

// int main()
// {
//     int n, count = 0;
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     do
//     {
//         count++;-
//         n = n / 10;
//     } while (n != 0);
//     printf("%d", count);
//     return 0;
// }
#include<stdio.h>
void main()
{
    int n, c, d, num = 1, space;

    printf("Enter the number of rows : ");
    scanf("%d", &n);

    space = n - 1;

    for (d = 1; d <= n; d++)
    {
        num = d;

        for (c = 1; c <= space; c++)
            printf(" ");

        space--;

        for (c = 1; c <= d; c++)
        {
            printf("%d", num);
            num++;
        }

        num--;

        for (c = 1; c < d; c++)
        {
            printf("%d", num);
            num--;
        }
        printf("\n");
    }
}