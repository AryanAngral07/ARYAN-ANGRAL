#include<stdio.h>

int main() {
    int a;
    printf("enter the number : ");
    scanf("%d",&a);

    if(a/a==1){
        printf("prime ");
    }
    else{
        printf("no");
    }
    return 0;
}