// #include<stdio.h>

// int main(){
//     int a,sum=0,avg;
//     printf("Enter the range of numbers : ");
//     scanf("%d",&a);

//     for(int i=1;i<=a;i++){
//         int b;
//         printf("Enter the number : ");
//         scanf("%d",&b);

//         if(b>=0){
//             sum = sum + b;
//         }
//         else{
//             avg=sum/i;
//             printf("%d",avg);
//         }
//     }
       
//     return 0;
// }
#include<stdio.h>
#include<string.h>

int main() 
{
    int length,width,i,j;
    printf("Enter the length:\n");
    scanf("%d",&length);
    printf("Enter the width:\n");
    scanf("%d",&width);
    for(i=1;i<=length;i++)
    {
        for(j=1;j<=width;j++)
        {
            if((i+j)%2==0)
                printf("[B]");
            else printf("[w]");
        }
        printf("\n");
    }
    return 0;
}
