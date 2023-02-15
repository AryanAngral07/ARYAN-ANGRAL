//ARYAN ANGRAL (080) (CSE)
//PROGRAME TO GET AREA OF SQUARE, AREA OF TRIANGLE AND AREA OF CIRCLE
//include heade files here stdio.h for input and print satements and math.h for mathematic functions
#include<stdio.h>
#include<math.h>
//giving int variable to get variable output 
//declaring main function
int main() {
//using float to get values in decimal to add accuracy.
    float a,sqarea,sidesum,s,parea,s1,s2,s3,triarea,r,circarea;
//printing statement to enter teh side of square
    printf("Please enter the side of square :");
//taking input form user for sid eof square by using scanf function
//-------------------------------------------------------------------------------------------------------
//               REPEATING THE ABOVE FUNCTION FOR DIIFERENT INPUTS
//-------------------------------------------------------------------------------------------------------
    scanf("%f",&a);
    printf("please enter the first side of triangle :");
    scanf("%f",&s1);
    printf("please enter second side of triangle :");
    scanf("%f",&s2);
    printf("please enter third side of triangle :");
    scanf("%f",&s3);
    printf("please enter radius of circle :");
    scanf("%f",&r);
//Now define or give locical sol. or formulae to get desired outputs by useing pre reg. variables
    sqarea=pow(a,2);
    sidesum=s1+s2+s3;
    s=sidesum/2;
    parea=s*(s-s1)*(s-s2)*(s-s3);
    triarea=sqrt(parea);
    circarea=3.14159265359*pow(r,2);
//printing all the required areas in one statement to teh user as desired.
    printf("area of square is :%f , area of triangle is :%f , area of circle is :%f ",sqarea,triarea,circarea);
    return 0;
}