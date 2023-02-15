#import<stdio.h>
int main() {
    int dd,mm,yy;
    printf(" enter date in DD format :");
    scanf("%d",&dd);
    printf(" enter month in MM format : ");
    scanf("%d",&mm);
    printf(" enetr year in YYYY format :");
    scanf("%d",&yy);
    if ((dd>=01)&&(dd<=31)&&(mm>=01)&&(mm<=12)&&(yy>=0001))
    {
        if (yy%4==0){
        if ((mm==01)&&(mm==03)&&(mm==05)&&(mm))
    }
    }
}
// #include <stdio.h>
 
// //take constant value for min and max year
// #define max_yr 9999
// #define min_yr 1800
 
// /*function to check the leap year
// if yes returns 1 else 0*/
// int isleapYear(int y)
// {
//   if ((y % 4 == 0) && (y % 100 != 0) && (y % 400 == 0))
//     return 1;
//   else
//     return 0;
// }
 
// //separate function to valid date or not
// int isDateValid(int d, int m, int y)
// {
//   if (y < min_yr || y > max_yr)
//     return 0;
//   if (m < 1 || m > 12)
//     return 0;
//   if (d < 1 || d > 31)
//     return 0;
 
//   /*for february month
//   if leap year feb has 29 days else 28 days*/
//   if (m == 2)
//   {
//     if (isleapYear(y))
//     {
//       if (d <= 29)
//         return 1;
//       else
//         return 0;
//     }
//   }
 
//   //for 30 days months (April, June, September and November)
//   if (m == 4 || m == 6 || m == 9 || m == 11)
//     if (d <= 30)
//       return 1;
//     else
//       return 0;
//   return 1;
// }
 
// //main function 
// int main(int argc, char
//   const *argv[])
// {
//   int d, m, y;
 
//   printf("Enter date (DD/MM/YYYY format): ");
//   scanf("%d/%d/%d", &d, &m, &y);
 
//   if (isDateValid(d, m, y))
//     printf("Date is valid.");
//   else
//     printf("Date is not valid.");
//   return 0;
// }