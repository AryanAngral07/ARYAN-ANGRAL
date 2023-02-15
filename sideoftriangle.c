#include<stdio.h>
int main() {
    float s1,s2,s3;
    printf("enetr first side:");
    scanf("%f",&s1);
    printf("enet second side");
    scanf("%f",&s2);
    printf("enter third side");
    scanf("%f",&s3);
    if ((s1==s2)&&(s1==s3))
    {
        printf(" equilator triangle ");
    }
    else 
    {
        printf(" not equi. triangle");
    }
    return 0;
}
