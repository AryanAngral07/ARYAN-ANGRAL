#include<stdio.h>
#include<math.h>
int main() {
    float area,radius;
    printf("Enter the radius of circle");
    scanf("%f",&radius);
    area=3.141592*pow(radius,2);
    printf("Area of circle is:%f",area);
    return 0;
}