#include<stdio.h>
int main()
{
    char cho;
    printf("enetr any character,no.,special character to know its data type:");
    scanf("%c",&cho);
    if ((cho>=65 && cho<=90) || (cho>=97 && cho<=122))
    {
        printf("character");
    }
    else if (cho>=48 && cho<=57)
    {
        printf("number");
    }
    else
    {
        printf("special character");
    }
    return 0;
}