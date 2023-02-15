#include<stdio.h>
int main() {
    int ch;
    printf("Enter a character: ");
    scanf("%d", &ch);
 
    switch (ch)
    {
        case 1:
            printf("one");  
            break;
        case 2:

            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four"); 
        case 5:
            printf("five");
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
    }
    return 0;
}