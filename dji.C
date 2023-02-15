#include<stdio.h>

int main(){
    int a;
    int array[5] = {1,2,3,4,5};
    printf("Enter the password : ");
    scanf("%d",&a);

    if((array[-5]=1) && (array[-4]=2) && (array[-3]=3) && (array[-2]=4) && (array[-1]=5))
    {
        printf("*****");
    }
    else{
        printf("incorrect\n");
    }
    
    return 0;
}

// program to hide password 
// #include <stdio.h>


// void main()
// {
//  char pasword[10],usrname[10], ch;
//  int i;


//  printf("Enter User name: ");
//  gets(usrname);
//  printf("Enter the password <any 8 characters>: ");

//  for(i=0;i<8;i++)
//  {
//   ch = getch();
//   pasword[i] = ch;
//   ch = '*' ;
//   printf("%c",ch);
//  }

//  pasword[i] =' ';

//  /*If you want to know what you have entered as password, you can print it*/

// }

