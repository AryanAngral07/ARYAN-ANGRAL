// scintific calculator
#include <stdio.h>
#include <math.h>
int main()
{
    int choice;
    double a,b;
    printf("1. Addition \n2. Subtraction\n3. Multiplication\n4. Division\n5. Square\n6. Square root\n7. Cube\n8. Cube root\n9. Power\n10. Log\n11. Natural log\n12. Sin\n13. Cos\n14. Tan\n15. Exit");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf%lf",&a,&b);
            printf("Sum = %lf",a+b);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf%lf",&a,&b);
            printf("Difference = %lf",a-b);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf%lf",&a,&b);
            printf("Product = %lf",a*b);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf%lf",&a,&b);
            printf("Quotient = %lf",a/b);
            break;
        case 5:
            printf("Enter a number: ");
            scanf("%lf",&a);
            printf("Square = %lf",a*a);
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%lf",&a);
            printf("Square root = %lf",sqrt(a));
            break;
        case 7:
            printf("Enter a number: ");
            scanf("%lf",&a);
            printf("Cube = %lf",a*a*a);
            break;
        case 8:
            printf("Enter a number: ");
            scanf("%lf",&a);
            printf("Cube root = %lf",cbrt(a));
            break;
        case 9:
            printf("Enter two numbers: ");
            scanf("%lf%lf",&a,&b);
            printf("Power = %lf",pow(a,b));
            break;
        case 10:
            printf("Enter a number: ");
            scanf("%lf",&a);
            printf("Log = %lf",log10(a));
            break;
        case 11:
            printf("Enter a number: ");
            scanf("%lf",&a);
            printf("Natural log = %lf",log(a));
            break;
        case 12:
            printf("Enter a number: ");
            scanf("%lf",&a);
            printf("Sin = %lf",sin(a));
            break;
        case 13:
            printf("Enter a number: ");
            scanf("%lf",&a);
            printf("Cos = %lf",cos(a));
            break;
        case 14:
            printf("Enter a number: ");
            scanf("%lf",&a);
            printf("Tan = %lf",tan(a));
            break;
        case 15:
            exit(0);
        default:
            printf("Invalid choice");
    }
    return 0;
}
