#include<stdio.h>
int sumofnno(int n);
int main(){
    int num;
    printf(" enetr the n atural number you want to add upto :");
    scanf("%d",&num);
    printf("sum=%d",sumofnno(num));
    return 0;

}
int sumofnno(int n){
    if(n!=0){
        return n+sumofnno(n-1);

    }
    else {
    return 0;}
}
