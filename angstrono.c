#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("enter a 3 digit number");
scanf("%d",&n);
int num1=n%10;
int i1=pow(num1 ,3);
int num2=num1%10;
int i2=pow(num2 ,3);
int num3=num2%10;
int i3=pow(num3 ,3);
int sum=i1+i2+i3;
if(sum==n){
    printf("armstrong number");
}
else{
    printf("not");
}
return 0;
}