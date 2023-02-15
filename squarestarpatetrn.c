// #include <stdio.h>

// int main()
// {
//     int i, j, N;

//     /* Input number of rows from user */
//     printf("Enter number of rows: ");
//     scanf("%d", &N);

//     /* Iterate through N rows */
//     for(i=1; i<=N; i++)
//     {
//         /* Iterate over columns */
//         for(j=1; j<=N; j++)
//         {
//             /* Print star for each column */
//             printf("*");
//         }
        
//         /* Move to the next line/row */
//         printf("\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// void main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if(i==1 || i==5 || j==1 || j==5){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         for(int j=1;j<=5;j++){
//             printf("*");
//         }
//         printf("\n");
//         }
// }

// program to printa square star pattern
#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("*");
        }
        printf("\n");
    }
}
