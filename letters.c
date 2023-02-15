#include<stdio.h>
#include<math.h>
int main() {
    int i,j,k;
    for(i=1,i<=5,i++)
    {
        for(j=1,j<=i,j++)
        {
            printf("%d",j);
        }
        printf("*");
        for(k=1,k<=i,k++)
        {
            printf("%d",k);
        }
        printf("");
return 0;

}
}