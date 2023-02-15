#include<stdio.h>
int main() {
    a:
    int day,choice;
    printf("Enter day number: ");
    scanf("%d", &day);
    switch(day)
    {
        case(1): printf("Monday");
        break;
        case(2): printf("Tuesday");
        break;
        case(3): printf("Wednesday");
        break;
        case(4): printf("Thursday");
        break;
        case(5): printf("Friday");
        break;
        case(6): printf("Saturday");
        break;
        case(7): printf("Sunday");
        break;
        default: printf("Invalid day");
        printf("\nIF YOU WANT TO ENETR THE DAY NO. AGAIN PRESS 1 ELSE PRESS any key");
        scanf("%d",&choice);
        if(choice==1)
        {
            goto a;
        }
        else{
            printf("THANK YOU");
        break;
        }
}
return 0;
}
