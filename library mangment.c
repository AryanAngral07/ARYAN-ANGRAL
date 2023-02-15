// // progra to make a library mangment system in c
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main() {
//     char name[20];
//     char author[20];
//     int id;
//     int price;
//     int quantity;
//     int choice;
//     printf("enter the name of the book: ");
//     scanf("%s",name);
//     printf("enter the author of the book: ");
//     scanf("%s",author);
//     printf("enter the id of the book: ");
//     scanf("%d",&id);
//     printf("enter the price of the book: ");
//     scanf("%d",&price);
//     printf("enter the quantity of the book: ");
//     scanf("%d",&quantity);
//     printf("enter the following choice to get desired output ");
//     printf("\n 1/ NAME \n 2/ AUTHOR \n 3/ ID \n 4/ PRICE \n 5/ QUANTITY");
//     scanf("%d",&choice);
//     switch (choice)
//     {
//     case 1:
//         printf(" NAME IS : %s",name);
//         break;
//     case 2:

//         printf(" AUTHOR IS : %s",author);
//         break;
//     case 3:

//         printf(" ID IS : %d",id);
//         break;
//     case 4:
    
//             printf(" PRICE IS : %d",price);
//             break;
//     case 5:
        
//                 printf(" QUANTITY IS : %d",quantity);
//                 break;
//     default:
//         printf("---------------INVALID INPUT !!!!!!!!!---------------");
//         break;
//     }
//     return 0;

// }

#include<stdio.h>
#include<string.h>
int strlength(char str1[20], char str2[20]);
int strtoupper(char str1[20], char str2[20]);
int strtolower(char str1[20], char str2[20]);
int strreverse(char str1[20], char str2[20]);
int strcopare(char str1[20], char str2[20]);
int steisuppercase(char str1[20], char str2[20]);
int strislowwercase(char str1[20], char str2[20]);

int main() {
    int choice;
    char str1[20],str2[20];
    printf("enter the first string: ");
    scanf("%s",str1);
    printf("enter the second string: ");
    scanf("%s",str2);
    printf(" enetr the give choice to get desired output \n 1. to compare the two string \n 2.to check if both strings are upper case or lower case \n 3. to convert both the strings to uppper case or lower case \n 4. to reverse  both the strings \n 5. to get the length of both the strings");
    scanf("%d",&choice);
    if(choice==1){
        if(strcmp(str1,str2)==0){
        printf("the strings are equal");
    }
    else{
        printf("the strings are not equal");
    }
    }
    else if(choice==2){
        if(isupper(str1)){
            printf("string 1 is in upper case ");
            if(isupper(str2)){
                printf("string 2 is in upper case");

            }
            else {
                printf("string 2 is in lower case ");

            }
        
        }
        else{
            printf("string 1 is in lower case");
            if(isupper(str2)){
                printf("string 2 is in upper case ");

            }
            else{
                printf("string 2 is in lower case ");

            }
        }
    }
    else if(choice==3) {
        int uc;
        printf(" to convert both the strings to upper case enetr 1 \n to convert both the strings to lower case enetr 2 ");
        scanf("%d",&uc);
        if(uc==1){
            toupper(str1);
            toupper(str2);
            printf(" new strings are string1 :%s   ____  string2 :%s   ",str1,str2);
        }
        else if (uc==2)
        {
            tolower(str1);
            tolower(str2);
            printf(" new strings are string1 :%s   ____  string2 :%s   ",str1,str2);

        }
        
    }
    else if(choice==4){
        strrev(str1);
        strrev(str2);
        printf(" new strings are string1 :%s   ____  string2 :%s   ",str1,str2);

    }
    else if (choice==5)
    {
        printf(" the length of string 1 is %d and the length of string 2 is %d",strlen(str1),strlen(str2));
    }
    else {
        printf(" ------------------------------------------------------------------------------");
    }
    
    
    return 0;

}