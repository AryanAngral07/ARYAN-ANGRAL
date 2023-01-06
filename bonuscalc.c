// A company decides to give bonus to all its employees on Diwali. A 5% bonus on salary is given to the male workers and 10% bonus on salary to the female workers. Write a program to enter the salary and sex of the employee. If the salary of the employee is less than Rs 10,000 then the employee gets an extra 2% bonus on salary. Calculate the bonus that has to be given to the employee and display the salary that the employee will get after the bonus is added.
//ARYAN ANGRAL 
#include <stdio.h>
int main()
{
label:
    int gender;
    float salary, bonus;
    printf("PLEASE ENTER THE GENDER \n 1.MALE \n 2.FEMALE \n");
    scanf("%d", &gender);

    switch (gender)
    {

    case(1):
        printf("Enter the salary of the employee:");
        scanf("%f", &salary);
        if (salary > 10000)
        {
            bonus = salary * 0.05;
        }
        else if (salary <= 10000)
        {
            bonus = salary * 0.07;
        }
        else
        {
            printf("------------INVALID INPUT---------------");
            printf("\n PLEASE ENTER THE CORRECT INPUT ");
        }
        break;

    case (2):
        printf("Enter the salary of the employee:");
        scanf("%f", &salary);
        if (salary > 10000)
        {
            bonus = salary * 0.10;
        }
        else if (salary <= 10000)
        {
            bonus = salary * 0.12;
        }
        else
        {
            printf("------------INVALID INPUT---------------");
            printf("\n PLEASE ENTER THE CORRECT INPUT ");
        }
        break;

    default:

        printf("------------INVALID INPUT---------------");
        printf("\n PLEASE ENTER THE CORRECT INPUT ");
        goto label;
    }

    printf("Bonus is %f", bonus);
    printf("\nSalary after bonus is %f", salary + bonus);

    return 0;
}
