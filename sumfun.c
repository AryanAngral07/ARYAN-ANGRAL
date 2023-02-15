#include<stdio.h>
int a,b;
int sum(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int sub(int a, int b);
int fac(int a);
int main(){
    label:
    int choice,c2;
    printf(" enter the first number: ");
    scanf("%d",&a);
    printf(" enetr the second number: ");
    scanf("%d",&b);
    printf("enter the following choice to get desired output ");
    printf("\n 1/ SUM \n 2/ MULTIPLICATION \n 3/ DIVISION \n 4/ SUBTRACTION \n 5/ FACTORIAL");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf(" SUM IS : %d",sum(a,b));
        break;
    case 2:
        printf(" MULTIPLICATION IS : %d",mul(a,b));
        break;
    case 3:
        printf(" DIVISION IS : %d",div(a,b));
        break;
    case 4:
        printf(" SUBTRACTION IS : %d",sub(a,b));
        break;
    case 5:
        printf(" FACTORIAL IS : %d",fac(a));
        break;
    default:
        printf("---------------INVALID INPUT !!!!!!!!!---------------");
        printf(" eneter 1 to enter the choice again \n enetr any other key to exit program :");
        scanf("%d",c2);
        if(c2==1)
        {
            goto label;
        }
        else {
            break;
        }
        
    }
}
int sum(int a , int b){
    int sum;
    sum=a+b;
    return sum;
}
int mul(int a , int b){
    int mul;
    mul=a*b;
    return mul;
}
int div(int a , int b){
    int div;
    div=a/b;
    return div;
}
int sub(int a , int b){
    int sub;
    sub=a-b;
    return sub;
}
int fac(int a){
    int fact=1;
    while(a!=0){

        fact=fact*a;
        a--;
    }
    return fact;
}




