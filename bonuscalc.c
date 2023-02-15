//Header file
#include <stdio.h>
//Main function
int main()
//program starts from this curly bracket
{
//go to label    
label:
//variable declaration
    char gender;
    float salary, bonus;
//output statement     
    printf("\nPLEASE ENTER THE GENDER \n M/m :MALE \n F/f: FEMALE \n");
//input statement
    scanf("%c", &gender);
//switch
    switch (gender)
    {
//case for male employee
    case('M'):
    case('m'):
        printf("Enter the salary of the employee:");
        scanf("%f", &salary);
//if elif statements
        // for salary greater than 10000
        if (salary > 10000)
        {
            bonus = salary * 0.05;
            printf("Bonus is %f", bonus);
            printf("\nSalary after bonus is %f", salary + bonus);
        }
        // for salary less than 10000
        else if (salary>0&&salary<=10000)
        {
            bonus = salary * 0.07;
            printf("Bonus is %f", bonus);
            printf("\nSalary after bonus is %f", salary + bonus);
        }
        else
        {
            printf("------------INVALID INPUT---------------");
            printf("\n PLEASE ENTER THE CORRECT INPUT ");
            goto label;
        }
        break;
//case for female employees 
    case ('F'):
    case ('f'):
        printf("Enter the salary of the employee:");
        scanf("%f", &salary);
        //for salary greater than 10000
        if (salary > 10000)
        {
            bonus = salary * 0.10;
            printf("Bonus is %f", bonus);
            printf("\nSalary after bonus is %f", salary + bonus);
        }
        else if (salary>0&&salary<=10000)
        // for salary less than 10000
        {
            bonus = salary * 0.12;
            printf("Bonus is %f", bonus);
            printf("\nSalary after bonus is %f", salary + bonus);
        }
        else
        {
            printf("------------INVALID INPUT---------------");
            printf("\n PLEASE ENTER THE CORRECT INPUT ");
            goto label;
        }
//break 
        break;
//default statement
    default:
//final output statement 
        printf("------------INVALID INPUT---------------");
        printf("\n PLEASE ENTER THE CORRECT INPUT ");
//goto label
        goto label;
        break;
    }
    return 0;
}
