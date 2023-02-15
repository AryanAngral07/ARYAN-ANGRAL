#include<stdio.h>
int main() {
    int i=1,n,sum=0;
    printf("enetr teh no of first natural no you want to add :");
    scanf("%d",&n);
    while (i<=n)
    {
        sum=sum+i;
        
        i++;
    }
    printf("sum of nos is:%d",sum);
    return 0;
    
}