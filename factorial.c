#include<Stdio.h>

int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);

    int factorial = 1;
    for(int i=1;i<=a;i++) {
    factorial = factorial * i;
    }
    printf("The factorial is %d",factorial);
    return 0;
}