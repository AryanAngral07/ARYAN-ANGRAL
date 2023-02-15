// #include<stdio.h>
// int main() {
//     int a,b,sum,sub,div,mul,root,squr;
//     printf("enetr first no:");
//     scanf("%d",&a);
//     printf("enter 2nd no :");
//     scanf("%d",&b);
//     printf("enetr * to multiply :\n enter /to divide :\n enter + to add : \n enter - to subtract : \n eneter */ to squareroot \n enter sq to square of nos ");
//     scanf("%")
//     if ((a==*))


// }
#include<stdio.h>
int main() {
    char name;
    int sallary;
    printf("\n enetr your name :\t");
    scanf("%c",&name);

    printf("\n hello sir \n enter 1 IF yopur basic sallary is <35000 \n enetr 2 if your basic sallary is between 35000-50000 \n enter 3 if your basic sqallary is >50000:\t");
    scanf("%d",&sallary);
    if (sallary==1) {
        float basic,da,hra,sallary;
        printf("enter your basic sallary :");
        scanf("%f",&basic);
        da=0.4*(basic);
        hra=0.1*(basic);
        sallary=(basic)+(da)+(hra);
        printf("your sallary is :%f",sallary);


    }
    else if (sallary==2)
    {
        float basic,da,hra,sallary;
        printf("enter your basic sallary :");
        scanf("%f",&basic);
        da=0.5*(basic);
        hra=0.15*(basic);
        sallary=(da)+(hra)+(basic);
        printf("your sallary is %f:",sallary);
        
    }
    else if (sallary==3)
    {
        float basic,da,hra,sallary;
        printf("enter your basic sallary :");
        scanf("%f",&basic);
        da=0.6*(basic);
        hra=0.2*(basic);
        sallary=(da)+(hra)+(basic);
        printf("your sallary is:%f",sallary);

    }
    else
    {
        printf("!!!!!!!!!! PLEASE ENETR CORRECT OPTION !!!!!!!!!!!!!");
    }
    return 0;
    
}