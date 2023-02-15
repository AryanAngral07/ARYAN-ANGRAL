// #include<stdio.h>
// int main() {
//     int a,b,c,d,e;
//     printf("enetr first digit of a no :");
//     scanf("%d",&a);
//     printf("enter second digit of no:");
//     scanf("%d",&b);
//     printf("enter third digit  of  no:");
//     scanf("%d",&c);
//     d=(a*100)+(b*10)+c;
//     printf("the no is :%d",d);
//     e=(c*100)+(b*10)+a;
//     printf("the reversed no is :%d",e);
//     return 0;
// }

// #include<stdio.h>

// int main() {
//     int reverse[3] = {1,2,3};
//     reverse[2] = {1,2,3};


//     return 0;
// }
#include<stdio.h>
int main() {
    int a,rem,reverse=0;
    printf("enter a no to reverse :");
    scanf("%d",&a);
    while (a!=0)
    {
        rem=a%10;
        reverse=reverse*10+rem;
        a/=10;

    }
    
    printf("reversed no is:%d",reverse);
    return 0;
}