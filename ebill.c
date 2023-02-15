#include <stdio.h>
int main()
{
    float units;
    float bil;
    printf("enetr the units used this month :");
    scanf("%f",&units);
    if ((units >= 0) && (units <= 50))
    {
        bil = units * 0.50;
        printf("%f", bil);
    }
    else if ((units > 50) && (units <= 100))
    {
        bil = units * 0.75;
        printf("total bill: %f", bil);
    }
    else if ((units > 100) && (units <= 250))
    {
        bil = units * 1.20;
        printf("total bill :%f", bil);
    }
    else if ((units > 250))
    {
        bil = units * 1.50;
        printf("total bill :%f", bil);
    }
    else
    {
        printf(" enter valid units :");
       
    }
    return 0;
}