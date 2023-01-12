// #include<stdio.h>
// #include<math.h>
// int main() {
//     float x1,x2,y1,y2,a,b,m,n,o,x;
//     printf("please enter value of x1 :");
//     scanf("%f",&x1);
//     printf("/n please enter value of y1 : ");
//     scanf("%f",&y1);
//     printf("/n please neter valuve of x2 :");
//     scanf("%f",&x2);
//     printf("/n pease enter value of y2 : ");
//     scanf("%f",&y2);
//     m=(x2-x1);
//     n=(y2-y1);
//     a=pow(m,2);
//     o=pow(n,2);
//     x=a+o;
//     b=sqrt(x);
//     printf("equidistance b/w the give ponts (%.2f,%.2f) & (%.2f,%.2f) is : %.2f ",x1,y1,x2,y2,b);
//     return 0;

// }
#include<stdio.h>
#include<math.h>
int main() {
    float x1,x2,y1,y2,a,d;
    printf("please enter value of x1 :");
    scanf("%f",&x1);
    printf("/n please enter value of y1 : ");
    scanf("%f",&y1);
    printf("/n please neter valuve of x2 :");
    scanf("%f",&x2);
    printf("/n pease enter value of y2 : ");
    scanf("%f",&y2);
    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("equidistance b/w the give ponts (%.2f,%.2f) & (%.2f,%.2f) is : %.2f ",x1,y1,x2,y2,d);
    return 0;

}


