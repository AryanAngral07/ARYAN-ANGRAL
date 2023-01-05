#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
    char name[20],password[8],;
    int csection,cbrand,csize,cprice,cproduct,ccolor,cmaterial,cstyle,ctype,csleeve,cfit,cpattern,coccasion,cneck;
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Enter your password: ");
    scanf("%s",&password);
    if (strcmp(password,"12345")==0) {
        printf("Welcome %s",name);
        printf(" hello sir in which department you want to shop 1. MEN \n 2.WOMEN \n 3.KIDS \n 4.OTHERS \n");
        scanf("%d",&csection);
        if(csection==1) {
            printf("hello sir in which brand you want to shop 1. ADIDAS \n 2. NIKE \n 3. PUMA \n 4. REEBOK \n 5. OTHERS \n");
            scanf("%d",&cbrand);
            if(cbrand==1) {
                printf("hello sir in which size you want to shop 1. S \n 2. M \n 3. L \n 4. XL \n 5. XXL \n");
                scanf("%d",&csize);
                if(csize==1) {
                    printf("hello sir in which price you want to shop 1. 500 \n 2. 1000 \n 3. 1500 \n 4. 2000 \n 5. 2500 \n");
                    scanf("%d",&cprice);
                    if(cprice==1) {
                        printf("hello sir in which product you want to shop 1. T-SHIRT \n 2. SHIRT \n 3. JEANS \n 4. TROUSERS \n 5. OTHERS \n");
                        scanf("%d",&cproduct);
                        if(cproduct==1) {
                            printf("hello sir in which color you want to shop 1. BLACK \n 2. WHITE \n 3. BLUE \n 4. RED \n 5. OTHERS \n");
                            scanf("%d",&ccolor);
                            if(ccolor==1) {
                                printf("hello sir in which material you want to shop 1. COTTON \n 2. POLYESTER \n 3. OTHERS \n");
                                scanf("%d",&cmaterial);
                                if(cmaterial==1) {
                                    printf("hello sir in which style you want to shop 1. CASUAL \n 2. FORMAL \n 3. OTHERS \n");
                                    scanf("%d",&cstyle);
                                    if(cstyle==1) {
                                        printf("hello sir in which type you want to shop 1. ROUND NECK \n 2. V-NECK \n 3. OTHERS \n");
                                        scanf("%d",&ctype);
                                        if(ctype==1) {
                                            printf("hello sir in which sleeve you want to shop 1. HALF SLEEVE \n");
                                            scanf("%d",&csleeve);
                                            if(csleeve==1) {
                                                printf("hello sir in which fit you want to shop 1. REGULAR \n 2. SLIM \n 3. OTHERS \n");
                                                scanf("%d",&cfit);
                                                if(cfit==1) {
                                                    printf("hello sir in which pattern you want to shop 1. SOLID \n 2. PRINTED \n 3. OTHERS \n");
                                                    scanf("%d",&cpattern);
                                                    if(cpattern==1) {
                                                        printf("hello sir in which occasion you want to shop 1. CASUAL \n 2. FORMAL \n 3. OTHERS \n");
                                                        scanf("%d",&coccasion);
                                                        if(coccasion==1) {
                                                            printf("hello sir in which neck you want to shop 1. ROUND \n 2. V \n 3. OTHERS \n");
                                                            scanf("%d",&cneck);
                            if(ccolor==2) {
                                printf("hello sir in which material you want to shop 1. COTTON \n 2. POLYESTER \n 3. OTHERS \n");
                                scanf("%d",&cmaterial);
                                if(cmaterial==1) {
                                    printf("hello sir in which style you want to shop 1. CASUAL \n 2. FORMAL \n 3. OTHERS \n");
                                    scanf("%d",&cstyle);
                                    if(cstyle==1) {
                                        printf("hello sir in which type you want to shop 1. ROUND NECK \n 2. V-NECK \n 3. OTHERS \n");
                                        scanf("%d",&ctype);
                                        if(ctype==1) {
                                            printf("hello sir in which sleeve you want to shop 1. HALF SLEEVE \n");
                                            scanf("%d",&csleeve);
                                            if(csleeve==1) {
                                                printf("hello sir in which fit you want to shop 1. REGULAR \n 2. SLIM \n 3. OTHERS \n");
                                                scanf("%d",&cfit);
                                                if(cfit==1) {
                                                    printf("hello sir in which pattern you want to shop 1. SOLID \n 2. PRINTED \n 3. OTHERS \n");
                                                    scanf("%d",&cpattern);
                                                    if(cpattern==1) {
                                                        printf("hello sir in which occasion you want to shop 1. CASUAL \n 2. FORMAL \n 3. OTHERS \n");
                                                        scanf("%d",&coccasion);
                                                        if(coccasion==1) {
                                                            printf("hello sir in which neck you want to shop 1. ROUND \n 2. V \n 3. OTHERS \n");
                                                            scanf("%d",&cneck);
                            if(ccolor==3) {
                                printf("hello sir in which material you want to shop 1. COTTON \n 2. POLYESTER \n 3. OTHERS \n");
                                scanf("%d",&cmaterial);
                                if(cmaterial==1) {
                                    printf("hello sir in which style you want to shop 1. CASUAL \n 2. FORMAL \n 3. OTHERS \n");
                                    scanf("%d",&cstyle);
                                    if(cstyle==1) {
                                        printf("hello sir in which type you want to shop 1. ROUND NECK \n 2. V-NECK \n 3. OTHERS \n");
                                        scanf("%d",&ctype);
                                        if(ctype==1) {
                                            printf("hello sir in which sleeve you want to shop 1. HALF SLEEVE \n");
                                            scanf("%d",&csleeve);
                                            if(csleeve==1) {
                                                printf("hello sir in which fit you want to shop 1. REGULAR \n 2. SLIM \n 3. OTHERS \n");
                                                scanf("%d",&cfit);
                                                if(cfit==1) {
                                                    printf("hello sir in which pattern you want to shop 1. SOLID \n 2. PRINTED \n 3. OTHERS \n");
                                                    scanf("%d",&cpattern);
                                                    if(cpattern==1) {
                                                        printf("hello sir in which occasion you want to shop 1. CASUAL \n 2. FORMAL \n 3. OTHERS \n");
                                                        scanf("%d",&coccasion);
                                                        if(coccasion==1) {
                                                            printf("hello sir in which neck you want to shop 1. ROUND \n 2. V \n 3. OTHERS \n");
                                                            scanf("%d",&cneck);
                            if(ccolor==4) {
                                printf("hello sir in which material you want to shop 1. COTTON \n 2. POLYESTER \n 3. OTHERS \n");
                                scanf("%d",&cmaterial);
                                if(cmaterial==1) {
                                    printf("hello sir in which style you want to shop 1. CASUAL \n 2. FORMAL \n 3. OTHERS \n");
                                    scanf("%d",&cstyle);
                                    if(cstyle==1) {
                                        printf("hello sir in which type you want to shop 1. ROUND NECK \n 2. V-NECK \n 3. OTHERS \n");
                                        scanf("%d",&ctype);
                                        if(ctype==1) {
                                            printf("hello sir in which sleeve you want to shop 1. HALF SLEEVE \n");
                                            scanf("%d",&csleeve);
                                            if(csleeve==1) {
                                                printf("hello sir in which fit you want to shop 1. REGULAR \n 2. SLIM \n 3. OTHERS \n");
                                                scanf("%d",&cfit);
                                                if(cfit==1) {
                                                    printf("hello sir in which pattern you want to shop 1. SOLID \n 2. PRINTED \n 3. OTHERS \n");
                                                    scanf("%d",&cpattern);
                                                    if(cpattern==1) {
                                                        printf("hello sir in which occasion you want to shop 1. CASUAL \n 2. FORMAL \n 3. OTHERS \n");
                                                        scanf("%d",&coccasion);
                                                        if(coccasion==1) {
                                                            printf("hello sir in which neck you want to shop 1. ROUND \n 2. V \n 3. OTHERS \n");
                                                            scanf("%d",&cneck);

                                                                                                                                         
        }
    else if()
}
