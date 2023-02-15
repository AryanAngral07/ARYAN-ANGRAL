// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str1[20];
//     printf("Enter the first string: ");
//     gets(str1);
//     if (strcmp(str1,strrev(str1))==0)
//         printf("The strings are palindrome");
//     else
//         printf("The strings are not palindrome");
//     return 0;   

    
// }
// // cprogram to check palindrome of a string
// Path: palstr.c
#include<stdio.h>
#include<string.h>
int main() {
    char str1[20],str2[25];
    printf("Enter the first string: ");
    gets(str1);
    strcat(str2,str1);
    if (strcmp(str1,str2)==0){
        printf("The strings are palindrome");

    }
    else 
    {
        printf("The strings are not palindrome");


    }
    
    return 0;   

    
}
