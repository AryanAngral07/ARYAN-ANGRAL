#include<stdio.h>
int main() {
    // int n,i,sum=0;
    // printf(" enter the no of nos you want to add:");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++)
    // {
    //     sum+=i;

    // }
    // printf("the sum of first %d natural nos is:%d",n,sum);
    // return 0;
    int r,c,i,j;
    printf(" enetr no of rows:");
    scanf("%d",&r);
    printf(" enetr no of columns:");
    scanf("%d",&c);
    for(i=1;i<=r;i++)
    {
        for (j=1;j<=c;j++)
        {
            printf("%d\a",i*j);
        }
        printf("\n");
        
    }
    return 0;


}