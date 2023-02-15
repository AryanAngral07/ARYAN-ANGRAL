#include<stdio.h>

int main(){
    char a;
    printf("Enter the character : ");
    scanf("%c",&a);

    if(a>='A' && a<='Z' ){
        printf("uppercase");
    }
    else{
        printf("lowercase");
    }    
    return 0;
}