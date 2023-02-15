#include<accctrl.h>
int main() {
    int i,n;
    printf("enetr a number :");
    scanf("%d",&n);
    i=n;
    while(i>=1) {

        if(i>=1){
            printf("%d",i);
        }
        else{
            printf("wrong input");
        }
        i--;
        
    }
    printf("%d",i);
    return 0;
}
