#include<stdio.h>
#include<math.h>
int main() {
    float a,c,d;
    printf("please enter side of square:");
    scanf("%f",&a);
    c=a*a;
    d=4*a;
    printf("area of square is:%f ; perimeter of square is:%f",c,d);
    return 0;
}