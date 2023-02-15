#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c;
    float d,r1,r2,root;
    printf("enter values of a b c in eqn ax^2+bx+c :");
    scanf("%d%d%d",&a,&b,%c);
    d=pow(b,2)+(4*a*c);
    if (d<0)
    {
        printf("the roots are imaginary ");
        r1=(-b+d)/(2*a);
        r2=(-b-d)/(2*a);
        printf(" imaginar roots are %f,%f",r1,r2);



    }
    else if (d=0)
    {
        printf("roots are real and same");
        r1=(-b+d)/(2*a);
        r2=(-b-d)/(2*a);
        printf(" imaginar roots are %f,%f",r1,r2);

    }
    else if(d>0)
    
}