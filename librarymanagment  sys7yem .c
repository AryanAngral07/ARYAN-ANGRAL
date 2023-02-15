// library managmet system in c simple project
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    //library managment sysyetm
    int choice;
    char pass[10], password[10] = "library";
    char bokname[20], author[20], addbook[20], addauthor[20];
    int i = 0;
    int ch;
    int count = 0;
    int bookno;
    int bookno1;
    int bookno2;
    int bookno3;
    int bookno4;
    int bookno5;
    int bookno6;
    int bookno7;
    int bookno8;
    int bookno9;
    int bookno10;
    printf("enetr the password to login:");
    scanf("%s", pass);
    if (strcmp(pass, password) == 0) {
        printf("password matched:");
    
    
            printf("1. add book details:");
            printf("2. delete book details:");
            printf("3. search book details:");
            printf("4. issue book:");
            printf("5. view book list:");
            printf("6. edit book details:");
            printf("7. exit:");
            printf("enter your choice:");
            scanf("%d", & choice);
            switch (choice) {
            case 1:
                printf("enter the book name:");
                scanf("%s", bokname);
                printf("enter the author name:");
                scanf("%s", author);
                printf("book added successfully:");
                break;
            case 2:

                printf("enter the book name:");
                scanf("%s", addbook);
                printf("enter the author name:");
                scanf("%s", addauthor);
                printf("book deleted successfully:");
                break;
            case 3:
                printf("enter the book name:");
                scanf("%s", addbook);
                printf("enter the author name:");
                scanf("%s", addauthor);
                printf("book found:");
                break;
            case 4:
                printf("enter the book name:");
                scanf("%s", addbook);
                printf("enter the author name:");
                scanf("%s", addauthor);
                printf("book issued:");
                break;
            case 5:
                printf("enter the book name:");
                scanf("%s", addbook);
                printf("enter the author name:");
                scanf("%s", addauthor);
                printf("book list:");
                break;
            case 6: 
                printf("enter the book name:");
                scanf("%s", addbook);
                printf("enter the author name:");
                scanf("%s", addauthor);
                printf("book details edited:");
                break;
            case 7:

                exit(0);
                break;
            default:

                printf("invalid choice:");
                break;
            }

    }
    else {
        printf("password not matched:");
    }
    return 0;

}