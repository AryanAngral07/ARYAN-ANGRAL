#include<stdio.h>
void main() {
    float var1,var2,division;
    printf("please enter first no to be divided :");
    scanf("%f",&var1);
    printf("please enter second no to be divide :");
    scanf("%f",&var2);
    division=var1/var2;
    printf("%f/%f=%.7f",var1,var2,division);
}