#include <stdio.h>
int main()
{
    int n, sum=0;

    do
    {
        printf("enetr a no :");
        scanf("%d", &n);
        sum = sum + n;

    } while (n > 0);
    printf("sum of nos is:%d", sum);
    return 0;
}