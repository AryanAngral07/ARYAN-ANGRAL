// #include<stdio.h>
// int main() {
//     int mainnum,num,rem,sum=0,i=1;
//     printf("enter a decimal number :");
//     scanf("%d",&num);
//     mainnum=num;
//     while (num!=0)
//     {
//         rem=num%2;
//         num=num/2;
//         sum=sum+(rem*i);
//         i=i*10;

//     }
//     printf("decimal number for %d is : %d",mainnum,sum);
//     return 0;
    
// }

#include<stdio.h>
#include<math.h>
int main() {
    int num,sum=0,rem,i=0;
    printf("enetr a binary number :");
    scanf("%d",&num);
    while (num!=0)
    {
        rem=num%10;
        num=num/10;
        sum+=rem*pow(2,i);
        i++;
    }
    printf("the decimal number for given binary number is:%d ",sum);
    return 0;

    
}