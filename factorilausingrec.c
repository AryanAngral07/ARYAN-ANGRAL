#include<stdio.h>
int facrec(int a);
int main() {
    int num;
    printf(" enetr a number to get its factorial :");
    scanf("%d",&num);
    printf("factorial is :%d",facrec(num));
    return 0;
}
int facrec(int a){
    if(a>=1) {
        return (a)*facrec(a-1);
    
    }
    else {
        return 1;
    }
    
}