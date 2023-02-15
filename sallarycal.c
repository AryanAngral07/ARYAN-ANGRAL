#include<stdio.h>
int main() {
    float basics,da,hra,sallary;
    printf("enter your basic sallary :");
    scanf("%f",&basics);
    if (basics<=38000)
    {
        float basic,da,hra,sallary;
        printf("enter your basic sallary :");
        scanf("%f",&basic);
        da=0.4*(basic);
        hra=0.1*(basic);
        sallary=(basic)+(da)+(hra);
        printf("your sallary is :%f",sallary);

    } 
    else if ((basics>38000) && (basics<56000))
     {
        float basic,da,hra,sallary;
        printf("enter your basic sallary :");
        scanf("%f",&basic);
        da=0.5*(basic);
        hra=0.15*(basic);
        sallary=(da)+(hra)+(basic);
        printf("your sallary is %f:",sallary);
    } 
    else
     {
        float basic,da,hra,sallary;
        printf("enter your basic sallary :");
        scanf("%f",&basic);
        da=0.6*(basic);
        hra=0.2*(basic);
        sallary=(da)+(hra)+(basic);
        printf("your sallary is:%f",sallary);

    }
    return 0;
    
}

