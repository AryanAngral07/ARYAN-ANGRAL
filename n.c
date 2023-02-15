#include<stdio.h>
int main() {
    float basics,da,hra,sallary;
    printf("enter your basic sallary :")
    scanf("%f",&basics);
    if (basics<=38000)
    {
        da=0.4*basics;
        hra=0.1*basics;
        sallary=basics+da+hra;
        printf("your sallary is :",sallary);

    } else if (basics>38000) && (basics<56000) {
        da=0.5*basics;
        hra=0.15*basics;
        sallary=da+hra+basics;
        printf("your sallary is %f:",sallary);
    } else {
        da=0.6*basics;
        hra=0.2*basics;
        sallary=da+hra+basics;
        printf("your sallary is %f:",sallary);

    }
    return 0;
    
}