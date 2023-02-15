//
// Created by SAMMU on 5/6/20.
//
#ifndef CMINIPROJECT_GENERAL_H
#define CMINIPROJECT_GENERAL_H
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
 int day,month,year;
}date;
typedef struct{
 int id;
 char name[50];
 date mfg,expiry;
 int price;
 int stock;
}drug;
date sys_date(void);
int rand_order(void);
#endif // CMINIPROJECT_GENERAL_H
//
// Created by SAMMU on 5/6/20.
//

//get system date
date sys_date(void){
 date sys_date;
 time_t T= time(NULL);
 struct tm tm;
 tm = *localtime(&T);
 sys_date.day=tm.tm_mday;
 sys_date.month=tm.tm_mon+1;
 sys_date.year=tm.tm_year+1900;
 return sys_date;
}
//generate random id
int rand_order(void){
 srand(time(0));
 int num = (rand() % (200000 - 100000 + 1)) + 1000;
 return num;
}
//
// Created by SAMMU on 4/6/20.
//
#ifndef CMINIPROJECT_PHARMACIST_H
#define CMINIPROJECT_PHARMACIST_H

#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
typedef struct{
 char mobile[11];
 char password[11];
}pharmacist;
void add_drug(char fname[]);
void delete_drug(char fname[]);
void update_drug(char fname[]);
void alert(char fname[]);
void account_pharmacist(void);
int login_pharmacist(char fname[]);
void print_stock(char fname[]);
int rand_id(void);
#endif // CMINIPROJECT_PHARMACIST_H
//
// Created by SAMMU on 4/6/20.
//
#include "pharmacist.h"
//generate random id for each drug
int rand_id(void) {
 int num = 0;
 srand(time(0));
 num = (rand() % (2000 - 1000 + 1)) + 1000;
 return num;
}
//add drug to inventory
void add_drug(char fname[]) {
 FILE * fp;
 fp = fopen(fname, "a");
 drug new_drug;
 new_drug.id = rand_id();
 printf("\nDrug: ");
 scanf("%s", new_drug.name);
 printf("\nManufacturing date(DD MM YY): ");
  scanf("%d %d %d", & new_drug.mfg.day, & new_drug.mfg.month, & 
new_drug.mfg.year);
 printf("\nExpiry date: ");
 scanf("%d %d %d", & new_drug.expiry.day, & new_drug.expiry.month, & 
new_drug.expiry.year);
 printf("\nPrice: ");
 scanf("%d", & new_drug.price);
 getchar();
 printf("\nNumber of units to be added to inventory: ");
 scanf("%d", & new_drug.stock);
 fprintf(fp, " %d %s %d %d %d %d %d %d %d %d", new_drug.id, new_drug.name, 
new_drug.mfg.day, new_drug.mfg.month, new_drug.mfg.year, new_drug.expiry.day, 
new_drug.expiry.month, new_drug.expiry.year, new_drug.price, new_drug.stock);
 printf("\nDrug added to inventory!");
 fclose(fp);
 return;
}
//delete drug
void delete_drug(char fname[]) {
 FILE * fp, * fp_tmp;
 drug new_drug;
 int found = 0;
 fp = fopen(fname, "r");
 pharmacist person;
 fscanf(fp, "%s %s", person.mobile, person.password);
 if (feof(fp)) {
    fclose(fp);
 printf("\nInventory empty!!!");
 return;
 }
 fp_tmp = fopen("tmp.txt", "a");
 if (!fp_tmp) {
 fclose(fp);
 fclose(fp_tmp);
 printf("\nUnable to open temp file.");
 return;
 }
 fprintf(fp_tmp, "%s %s", person.mobile, person.password);
 int drug_id;
 printf("\nDrug ID to be deleted: ");
 scanf("%d", & drug_id);
 while (fscanf(fp, "%d %s %d %d %d %d %d %d %d %d", & new_drug.id, 
new_drug.name, & new_drug.mfg.day, & new_drug.mfg.month, & new_drug.mfg.year, & 
new_drug.expiry.day, & new_drug.expiry.month, & new_drug.expiry.year, & 
new_drug.price, & new_drug.stock) != EOF) {
 if (drug_id == new_drug.id) {
 printf("\nDrug found and deleted from inventory.");
 found = 1;
 } else {
 fprintf(fp_tmp, " %d %s %d %d %d %d %d %d %d %d", new_drug.id, 
new_drug.name, new_drug.mfg.day, new_drug.mfg.month, new_drug.mfg.year, 
new_drug.expiry.day, new_drug.expiry.month, new_drug.expiry.year, new_drug.price, 
new_drug.stock);
 }
 }
 if (!found) {
 printf("\n%d not found in inventory.", drug_id);
 }
 fclose(fp);
 fclose(fp_tmp);
 remove(fname);
 rename("tmp.txt", fname);
 return;
}
//update details of particular drug in inventory
void update_drug(char fname[]) {
 FILE * fp, * fp_tmp;
 drug new_drug;
 int choice;
 int found = 0;
 pharmacist person;
 fp = fopen(fname, "r");
 fscanf(fp, "%s %s", person.mobile, person.password);
 if (feof(fp)) {
 fclose(fp);
 printf("\nInventory empty!!!");
 return;
 }
 fp_tmp = fopen("tmp.txt", "a");
 if (!fp_tmp) {
 printf("\nUnable to open temp file.");
 return;
 }
 fprintf(fp_tmp, "%s %s", person.mobile, person.password);
  int drug_id;
 printf("\nDrug id to be updated: ");
 scanf("%d", & drug_id);
 while (fscanf(fp, "%d %s %d %d %d %d %d %d %d %d", & new_drug.id, 
new_drug.name, & new_drug.mfg.day, & new_drug.mfg.month, & new_drug.mfg.year, & 
new_drug.expiry.day, & new_drug.expiry.month, & new_drug.expiry.year, & 
new_drug.price, & new_drug.stock) != EOF) {
 if (drug_id == new_drug.id) {
 found = 1;
 printf("\nWhich information would you like to update?"
 "\n1.Name"
 "\n2.Manufacturing date"
 "\n3.Expiry date"
 "\n4.Price"
 "\n5.Stock left"
 "\nEnter number: \n");
 scanf("%d", & choice);
 printf("\nEnter new information: ");
 switch (choice) {
 case 1:
 scanf("%s", new_drug.name);
 break;
 case 2:
 scanf("%d %d %d", & new_drug.mfg.day, & new_drug.mfg.month, & 
new_drug.mfg.year);
 break;
 case 3:
 scanf("%d %d %d", & new_drug.expiry.day, & new_drug.expiry.month, & 
new_drug.expiry.year);
 break;
 case 4:
 scanf("%d", & new_drug.price);
 break;
 case 5:
 scanf("%d", & new_drug.stock);
 break;
 }
 fprintf(fp_tmp, " %d %s %d %d %d %d %d %d %d %d", new_drug.id,
 new_drug.name, new_drug.mfg.day, new_drug.mfg.month,
 new_drug.mfg.year, new_drug.expiry.day, new_drug.expiry.month,
 new_drug.expiry.year, new_drug.price, new_drug.stock);
 } else {
 fprintf(fp_tmp, " %d %s %d %d %d %d %d %d %d %d", new_drug.id,
 new_drug.name, new_drug.mfg.day, new_drug.mfg.month,
 new_drug.mfg.year, new_drug.expiry.day, new_drug.expiry.month,
 new_drug.expiry.year, new_drug.price, new_drug.stock);
 }
 }
 if (!found) {
 printf("\n%d not found in inventory.", drug_id);
 }
 fclose(fp);
 fclose(fp_tmp);
 remove(fname);
 rename("tmp.txt", fname);
 return;
}
//check inventory for drugs that are expiring in one month
void alert(char fname[]) {
 FILE * fp;
 int sys_day, sys_mon, sys_year;
 date today;
 drug new_drug;
 today = sys_date();
 sys_day = today.day;
 sys_mon = today.month;
 sys_mon == 12 ? (sys_mon = 1) : ++sys_mon;
 sys_year = today.year;
 pharmacist person;
 fp = fopen(fname, "r");
 fscanf(fp, "%s %s", person.mobile, person.password);
 if (feof(fp)) {
 fclose(fp);
 printf("\nInventory empty!!! No alerts...");
 return;
 }
 while (fscanf(fp, "%d %s %d %d %d %d %d %d %d %d", & new_drug.id, 
new_drug.name, & new_drug.mfg.day, & new_drug.mfg.month, & new_drug.mfg.year, & 
new_drug.expiry.day, & new_drug.expiry.month, & new_drug.expiry.year, & 
new_drug.price, & new_drug.stock)) {if (new_drug.expiry.day == sys_day && new_drug.expiry.month == sys_mon && 
new_drug.expiry.year == sys_year && !feof(fp)) {
 printf("\nALERT: %s is going to expire in 1 month!!!", new_drug.name);
 }
 if (new_drug.stock == 0 && !feof(fp)) {
 printf("\nALERT: %s is out of stock!!!!", new_drug.name);
 } else if (feof(fp)) {
 printf("\n\nNo alerts for now....");
 break;
 }
 }
 fclose(fp);
 return;
}
//register account-create new file
void account_pharmacist(void) {
 pharmacist person;
 printf("\nCreate an account......\nEnter your mobile number: ");
 scanf("%s", person.mobile);
 char fname[15];
 strcpy(fname, person.mobile);
 strcat(fname, ".txt");
 FILE * fp1;
 fp1 = fopen("sellers.txt", "a");
 fprintf(fp1, " %s", fname);
 fclose(fp1);
  FILE * fp;
 fp = fopen(fname, "r");
 if (fp) {
 printf("\nAn account is already registered in this number!\nTry logging in...");
 fclose(fp);
 return;
 }
 fclose(fp);
 printf("\nEnter a password of your choice(min 10 characters): ");
 scanf("%s", person.password);
 fp = fopen(fname, "w");
 fprintf(fp, "%s %s", person.mobile, person.password);
 fclose(fp);
 printf("\nCongratulations your account has been created!!! Access it with your mobile 
number as the username and the password you have entered.");
 return;
}
//login
int login_pharmacist(char fname[]) {
 pharmacist person;
 printf("\nLogin......\nEnter your mobile number: ");
 scanf("%s", person.mobile);
 strcpy(fname, person.mobile);
  strcat(fname, ".txt");
 FILE * fp;
 fp = fopen(fname, "r");
 if (fp == NULL) {
 printf("\nAccount does not exist!");
 fclose(fp);
 return 2;
 }
 fscanf(fp, "%s %s", person.mobile, person.password);
 fclose(fp);
 char psw[11];
 printf("\nEnter your password: ");
 scanf("%s", psw);
 getchar();
 if (strcmp(person.password, psw) == 0) {
 printf("\nYou have logged in!");
 return 1;
 } else {
 printf("\nYou have typed in the wrong password!");
 return 0;
 }
}
// Prints out the existing inventory of drugs
void print_stock(char fname[]) {FILE * fp;
 drug new_drug;
 pharmacist person;
 fp = fopen(fname, "r");
 fscanf(fp, "%s %s", person.mobile, person.password);
 if (feof(fp)) {
 fclose(fp);
 printf("\nInventory empty!!! No stocks to be displayed...");
 return;
 }
 while (fscanf(fp, "%d %s %d %d %d %d %d %d %d %d", & new_drug.id, 
new_drug.name, & new_drug.mfg.day, & new_drug.mfg.month, & new_drug.mfg.year, & 
new_drug.expiry.day, & new_drug.expiry.month, & new_drug.expiry.year, & 
new_drug.price, & new_drug.stock)) {
 printf("\nID-%d %s\nMfg: %d/%d/%d\nExpiry: %d/%d/%d\nPrice: $%d\n%d 
left\n", new_drug.id,
 new_drug.name, new_drug.mfg.day, new_drug.mfg.month, new_drug.mfg.year,
 new_drug.expiry.day, new_drug.expiry.month, new_drug.expiry.year,
 new_drug.price, new_drug.stock);
 if (feof(fp)) {
 break;
 }
 }
 fclose(fp);
 return;
}
//
// Created by SAMMU on 5/6/20.
//
#ifndef CMINIPROJECT_CUSTOMER_H
#define CMINIPROJECT_CUSTOMER_H
#include "general.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include "pharmacist.h"
typedef struct{
 char name[50];
 char email[50];
 char mobile[11];
 char password[11];
}customer;
void buy(drug *ptr,char fname_customer[]);
void account_customer(void);
int login_customer(char fname[]);
int no_sellers(void);
void add_cart(drug *ptr,int no_sellers,char **sellers,int id,int quantity,int cart_count);
void print_cart(drug *ptr,int cart_count);
void delete_cart(drug *ptr, int no_sellers, char **sellers, int id, int quantity,drug *ptr1,int 
cart_count,int new_cart_count);
#endif // CMINIPROJECT_CUSTOMER_H
//
// Created by SAMMU on 5/6/20.
//
#include "customer.h"
//add drug to cart
void add_cart(drug * ptr, int no_sellers, char ** sellers, int id, int quantity, int cart_count) {
 FILE * fp, * fp_tmp;
 int found = 0;
 drug new_drug;
 pharmacist person;
 for (int i = 0; i < no_sellers; i++) {
 fp = fopen( * (sellers + i), "r");
 fscanf(fp, "%s %s", person.mobile, person.password);
 if (feof(fp)) {
 fclose(fp);
 printf("\nInventory empty!!!");
 return;
 }
 fp_tmp = fopen("tmp.txt", "a");
 fprintf(fp_tmp, "%s %s", person.mobile, person.password);
 while (fscanf(fp, "%d %s %d %d %d %d %d %d %d %d", & new_drug.id,
 new_drug.name, & new_drug.mfg.day, & new_drug.mfg.month, &
 new_drug.mfg.year, & new_drug.expiry.day, &
 new_drug.expiry.month, & new_drug.expiry.year, &
 new_drug.price, & new_drug.stock) != EOF) {
 if (id == new_drug.id) {
 found = 1;
 if (new_drug.stock == 0 || (new_drug.stock - quantity) < 0) {
 printf("\n%s has sold out!!!", new_drug.name);
 fprintf(fp_tmp, " %d %s %d %d %d %d %d %d %d %d", new_drug.id,
 new_drug.name, new_drug.mfg.day, new_drug.mfg.month,
 new_drug.mfg.year, new_drug.expiry.day, new_drug.expiry.month,
 new_drug.expiry.year, new_drug.price, new_drug.stock);
 continue;
 }
 new_drug.stock -= quantity;
 fprintf(fp_tmp, " %d %s %d %d %d %d %d %d %d %d", new_drug.id,
 new_drug.name, new_drug.mfg.day, new_drug.mfg.month,
 new_drug.mfg.year, new_drug.expiry.day, new_drug.expiry.month,
 new_drug.expiry.year, new_drug.price, new_drug.stock);
 new_drug.stock = quantity;
 ptr[cart_count] = new_drug;
 printf("\n%s added to cart!", new_drug.name);
 } else {
 fprintf(fp_tmp, " %d %s %d %d %d %d %d %d %d %d", new_drug.id,
 new_drug.name, new_drug.mfg.day, new_drug.mfg.month,
 new_drug.mfg.year, new_drug.expiry.day, new_drug.expiry.month,
 new_drug.expiry.year, new_drug.price, new_drug.stock);
 }
 }
 fclose(fp);
 fclose(fp_tmp);
 remove( * (sellers + i));
 rename("tmp.txt", *(sellers + i));
 if (!found) {
 printf("\n%d not found in inventory.", id);
 }
 }
 return;
}
//remove drug from cart
void delete_cart(drug * ptr, int no_sellers, char ** sellers, int id, int quantity,
 drug * ptr1, int cart_count, int new_cart_count) {
 FILE * fp, * fp_tmp;
 int found = 0;
 drug new_drug;
 pharmacist person;
 for (int i = 0; i < no_sellers; i++) {
 fp = fopen( * (sellers + i), "r");
 fscanf(fp, "%s %s", person.mobile, person.password);
 if (feof(fp)) {
 fclose(fp);
 printf("\nInventory empty!!!");
 return;
 }
 fp_tmp = fopen("tmp.txt", "w");
 fprintf(fp, "%s %s", person.mobile, person.password);
 while (fscanf(fp, " %d %s %d %d %d %d %d %d %d %d", & new_drug.id, 
new_drug.name, & new_drug.mfg.day, & new_drug.mfg.month, & new_drug.mfg.year, & 
new_drug.expiry.day, & new_drug.expiry.month, & new_drug.expiry.year, & 
new_drug.price, & new_drug.stock) != EOF) {
 if (id == new_drug.id) {
 found = 1;
 new_drug.stock += quantity;
 fprintf(fp_tmp, " %d %s %d %d %d %d %d %d %d %d", new_drug.id, 
new_drug.name, new_drug.mfg.day, new_drug.mfg.month, new_drug.mfg.year, 
new_drug.expiry.day, new_drug.expiry.month, new_drug.expiry.year, new_drug.price, 
new_drug.stock);
 } else {
 fprintf(fp_tmp, " %d %s %d %d %d %d %d %d %d %d", new_drug.id, 
new_drug.name, new_drug.mfg.day, new_drug.mfg.month, new_drug.mfg.year, 
new_drug.expiry.day, new_drug.expiry.month, new_drug.expiry.year, new_drug.price, 
new_drug.stock);
 }
 }
 fclose(fp);
 fclose(fp_tmp);
 remove( * (sellers + i));
 rename("tmp.txt", *(sellers + i));
 }
 for (int i = 0; i < new_cart_count; i++) {
 for (int j = 0; j < cart_count; j++) {
 if (ptr[j].id != id) {
 ptr1[i] = ptr[j];
 }
 }
  }
 if (!found) {
 printf("\n%d not found in cart.", id);
 }
 return;
}
void buy(drug * ptr, char fname_customer[]) {
 int i = 0, order;
 FILE * fp;
 char address[50];
 printf("\nEnter your address: ");
 scanf("%s", address);
 getchar();
 fp = fopen(fname_customer, "a");
 date today = sys_date();
 order = rand_order();
 printf("\n\n\n ORDER-SVS%d", order);
 printf("\n\n%d/%d/%d", today.day, today.month, today.year);
 printf("\nYour order: ");
 fprintf(fp, " %d/%d/%d", today.day, today.month, today.year);
 while ((ptr + i) && (ptr + i) - > stock != 0) {
 fprintf(fp, " %d %s -%d units", (ptr + i) - > id, (ptr + i) - > name, (ptr + i) - > stock);
 printf("%d %s - %d units", (ptr + i) - > id, (ptr + i) - > name, (ptr + i) - > stock);
 i++;
 }
 printf("\nThe above items will be shipped to \n %s \n within 1 week.Only cash on 
delivery will be accepted.\n\n\n", address);
 fclose(fp);
 return;
}
//register a account-create new file
void account_customer(void) {
 customer person;
 printf("\nCreate an account......\nEnter your name,email and mobile number: ");
 scanf("%s %s %s", person.name, person.email, person.mobile);
 char fname[15];
 strcpy(fname, person.mobile);
 strcat(fname, ".txt");
 FILE * fp;
 fp = fopen(fname, "r");
 if (fp) {
 printf("\nAn account is already registered in this number!\nTry logging in...");
 fclose(fp);
 return;
 }
 fclose(fp);
 printf("\nEnter a password of your choice: ");
 scanf("%s", person.password);
 fp = fopen(fname, "w");
  fprintf(fp, "%s %s %s %s", person.name, person.email, person.mobile, person.password);
 fclose(fp);
 printf("\nCongratulations your account has been created!!! Access it with your mobile 
number as the username and the password you have entered.");
 return;
}
//login
int login_customer(char fname[]) {
 customer person;
 printf("\nLogin......\nEnter your mobile number: ");
 scanf("%s", person.mobile);
 strcpy(fname, person.mobile);
 strcat(fname, ".txt");
 FILE * fp;
 fp = fopen(fname, "r");
 if (fp == NULL) {
 fclose(fp);
 printf("\nAccount does not exist!");
 return 2;
 }
 fscanf(fp, "%s %s %s %s", person.name, person.email, person.mobile, person.password);
 char psw[11];
 printf("\nEnter your password: ");
 scanf("%s", psw);
 if (strcmp(person.password, psw) == 0) {
 printf("\nYou have logged in!");
 fclose(fp);
 return 1;
 } else {
 printf("\nYou have typed in the wrong password!");
 fclose(fp);
 return 0;
 }
}
int no_sellers(void) {
 FILE * fp;
 int i = 0;
 char seller[15];
 fp = fopen("sellers.txt", "r");
 while (fscanf(fp, "%s", seller) != EOF) {
 i++;
 };
 fclose(fp);
 return i;
}
//print cart
void print_cart(drug * ptr, int cart_count) {
 printf("\nYour cart contains: ");
 for (int i = 0; i < cart_count; i++) {
 printf("%s %d units", (ptr + i) - > name, (ptr + i) - > stock);
 }
 return;
}