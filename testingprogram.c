#include <stdio.h>

int main()
{
    label:
    long int password;
    printf("enter pin to access the program :");
    scanf("%d",&password);
    if (password == 12345)
    {
        int a;
        printf("\1_ADDIDAS\n2_ARMANI\n3_ZARA\n4_GUCCI\n5_HnM\n6_OCTAVE");
        printf("\n\tEnter the choice : ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            int a;
            printf("\n1_LADIES\n2_GENTS\n3_CHILDREN\n");
            printf("\n\tEnter the choice : \n");
            scanf("%d", &a);

            if (a == 1)
            {
                printf("\n1_$500 - crop_top\n2_$200 - skirt\n\n");
            }
            else if (a == 2)
            {
                printf("\n1_$10 - jeans\n2_$20 - shirt\n");
            }
            else if (a == 3)
            {
                printf("\n1_$1 - jacket\n2_$2 - basket\n");
            }
            else
            {
                printf("error 404\n");
            }
            break;

        case 2:
            int b;
            printf("\n1_LADIES\n2_GENTS\n3_CHILDRENS\n");
            printf("\n\tEnter the choice : \n");
            scanf("%d", &b);

            if (b == 1)
            {
                printf("\n1_$5000 - crop_top\n2_$2000 - skirt\n");
            }
            else if (b == 2)
            {
                printf("\n1_$100 - jeans\n2_$200 - shirt\n");
            }
            else if (b == 3)
            {
                printf("\n1_$10 - jacket\n2_$20 - basket\n");
            }
            else
            {
                printf("error 404\n");
            }
            break;

        case 3:
            int c;
            printf("\n1_LADIES\n2_GENTS\n3_CHILDRENS");
            printf("\n\tEnter the choice: \n");
            scanf("%d", &c);

            if (c == 1)
            {
                printf("\n1_$6000 - suit\n2_$4000 - shirt\n");
            }
            else if (c == 2)
            {
                printf("\n_$4555 - jeans\n2_$4774 _ sweat shirt\n");
            }
            else if ("c==3")
            {
                printf("\n1_$4875 - jacket\n2_$7498 - basket");
            }

            else
            {
                printf("error 404\n");
            }
            break;

        case 4:
            int d;
            printf("\n1_LADIES\n2_GENTS\n3_CHILDRENS");
            printf("\n\tEnter the choice: ");
            scanf("%d", &d);
            if (d == 1)
            {
                printf("\n1_$4895 - suit\n2_$4745 - shirt");
            }
            else if (d == 2)
            {
                printf("\n1_$8475 - jeans\n2_$7865 - jacket");
            }
            else if (d == 3)
            {
                printf("\n1_$8747 - jacket\n2_$7645 - basket");
            }
            else
            {
                printf("error 404");
            }
            break;
        case 5:
            int e;
            printf("\n1_LADIES\n2_GENTS\n3_CHILDRENS\n");
            printf("\n\tEnter the choice : \n");
            scanf("%d", &e);

            if (e == 1)
            {
                printf("\n1_$500 - crop_top\n2_$200 - skirt\n\n");
            }
            else if (e == 2)
            {
                printf("\n1_$10 - jeans\n2_$20 - shirt\n");
            }
            else if (e == 3)
            {
                printf("\n1_$1 - jacket\n2_$2 - basket\n");
            }

            else
            {
                printf("error 404\n");
            }
            break;
        case 6:
            int f;
            printf("\n1_LADIES\n2_GENTS\n3_CHILDRENS\n");
            printf("\n\tEnter the choice : \n");
            scanf("%d", &f);

            if (f == 1)
            {
                printf("\n1_$500 - crop_top\n2_$200 - skirt\n\n");
            }
            else if (f == 2)
            {
                printf("\n1_$10 - jeans\n2_$20 - shirt\n");
            }
            else if (f == 3)
            {
                printf("\n1_$1 - jacket\n2_$2 - basket\n");
            }
            else
            {
                printf("error 404\n");
            }
            break;
        default:
            printf("please enter correct option");
            break;
        }
    }
    else
    {
    printf("enter correct password\n");
    goto label;
    }
    return 0;
}