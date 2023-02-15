//write aprogram in c, that will accept the no call (unit say per minute) made and print the amount payable, using following condition: 1. first 200 calls are free. 2. next 300 calls are @Rs. 1/unit 3. And rest calls are @Rs. 2/unit\
//header files
#include <stdio.h>
//main function
int main()
{   //variable declaration
    int call, amount;
    //printf and scanf function
    printf("Enter the no of calls made:");
    scanf("%d", &call);
    //if else statements
    //for call less than 200
    if (call <= 200)
    {
        amount = 0;
    }
    //for call less than 500
    else if (call <= 500)
    {
        amount = (call - 200);
    }
    //for call greater than 500
    else
    {
        amount = (call - 500) * 2 + 300;
    }
    //printf function
    //final output statement
    printf("Amount payable is %d", amount);
    return 0;
}
