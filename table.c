// #include <stdio.h>
// int main() {

//   char ch;
//   int n, i;
//   printf("Enter an integer: ");
//   scanf("%c", &ch);
//   n=ch;
//   for (i = 1; i <= 10; ++i) {
//     printf("%d * %d = %d \n", n, i, n * i);
//   }
//   return 0;
// }
// #include <stdio.h>
// int main() {
      
//   char ch;
//   int n, i;
//   printf("Enter an integer: ");
//   scanf("%c", &ch);
//   n=ch;
//   for (i = 1; i <= 10; ++i) {

//     printf("%d * %d = %d \n", n, i, n * i);
//   }
// #include<stdio.h>
// int main() {
//     float i,sum;
//     printf("Enter a number: ");
//     scanf("%f", &i);
//     printf("You entered: %f", i);
//     sum+=i;
//     for(i>=1){


//     }
        
        


//     }
#include<stdio.h>
 
int string_ln(char*);
 
void main() {
   char str[20];
   int length;
   
   printf("\nEnter any string : ");
   
   length = string_ln(str);
   printf("The length of the given string %s is : %d", str, length);
   getch();
}
 
int string_ln(char*p) /* p=&str[0] */
{
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}
    
