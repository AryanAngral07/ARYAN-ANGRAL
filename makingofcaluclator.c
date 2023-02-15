#include<stdio.h>
#include<math.h>
int main() {
    int x;
    printf("TYPE 1 TO X(multiply) \n TYPE 2 TO /(divide) \n TYPE 3 TO +(add) \n TYPE 4 TO -(subtract) \n ");
    scanf("%d",&x);
    if (x==1) {
        float a,b,c;
        printf("enetr value of first no.:");
        scanf("%f",&a);
        printf("enter value of second no.:");
        scanf("%f",&b);
        c=a*b;
        printf("aXb=%f",c);
        return 0;
    }
    else if (x==2) {  
        float a,b,c;
        printf("enetr value of first no.:");
        scanf("%f",&a);
        printf("enter value of second no.:");
        scanf("%f",&b);
        c=a/b;
        printf("a/b=%f",c);
        return 0;
    }
    else if (x==3) {   
        float a,b,c;
        printf("enetr value of first no.:");
        scanf("%f",&a);
        printf("enter value of second no.:");
        scanf("%f",&b);
        c=a+b;
        printf("a+b=%f");
        return 0;

    }
    else if (x==4) {   
        float a,b,c;
        printf("enetr value of first no.:");
        scanf("%f",&a);
        printf("enter value of second no.:");
        scanf("%f",&b);
        c=a-b;
        printf("a-b=%f",c);
        return 0;
    }
    else {
        printf("wrong input");
        return 0;
    }
    return 0;
}