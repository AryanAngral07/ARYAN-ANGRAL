#include<stdio.h>
void main(){
    int a,b;
    int sum = 0;
    printf("Enter the number and press n to exit : ");

    while((scanf("%d",&a)==1) && b>=0){
        sum = sum + a;
    }
    printf("%d",sum);
}