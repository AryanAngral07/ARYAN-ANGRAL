#include<stdio.h>
int main() {
    int n,i,f;
    printf("enter a no to find factorial :");
    scanf("%d",&n);
    f=i=1;
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf("the factorial of %d is :%d",n,f);
    return 0;
}
/*writng comments
multi lines comments for factorila of a  no in c programing language 
firstly we have tyo give a aheader file i.e stdio.h herre for geting outputs and taking inputs form users 
to use a header file we have to use commands #include<------file name------>
teh declare int or void type of code then main function 
the in main function we link the library to main code
then in main coding box we declare variables of int type for which we have to take the factorial 
teh use print satement to print out the message to input the no to get the factorial and then use scan function i.e scanf-*/