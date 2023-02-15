#include<stdio.h>
#include<string.h>
int main() {
    char bookn[50],booklis[5],bookissue[5];
    int choices;
    printf(" WELLCOME TO LIBRARY MANAGEENT SYSTEM ");
    printf("PLEASE SELECT FROM GIVN CHOICES \n 1. VIEW THE LIST OF BOOKS \n 2. ADD BOOK WITH NAME \n 3. FOR ISSUED BOOKS ");
    switch (choices)
    {
    case 1:
        puts(booklis);
        break;
    case 2:
        printf(" enetr the bok name ");
        gets(bookn);
        strcat(booklis,bookn);
        break;
    case 3:
        puts(bookissue);
    default:
        break;
    }
    printf("enetr the name of the books ");
    gets(bookn);
    
    
    return 0;
    }