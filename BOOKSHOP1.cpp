#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;


char name[100];
char bookname[200];
int mobile_number[11];
char date[20];
long int cost;
int n,i;

void write()
{
FILE *fp;
char nm[100];
char bkname[200];
int mob_number[11];
char dat[20];
long int cp;

printf("ENTER THE DATE::");
scanf("%s",dat);
printf("ENTER THE NAME OF CUSTOMER::");
scanf("%s",nm);
printf("ENTER THE BOOK NAME::");
scanf("%s",bkname);
printf("ENTER THE MOBILE NUMBER::");
scanf("%d",&mob_number);

printf("ENTER THE COST OF THE BOOK::");
scanf("%ld",&cp);

fp=fopen("Record.txt","a");

fprintf(fp,"\n%s %s %s %d %d %ld",dat,nm,bkname,mob_number,cp);
printf("\n \t \t  RECORD WRITTEN SUCCESSFULLY!!!!!\n");
fclose(fp);
}


void display(char da[])
{
  FILE *fp;
  int res;
  fp=fopen("Record.txt","r");
  while(fscanf( fp ,"\n %s %s %s %s %ld",date,name,bookname,mobile_number,&cost)!=EOF)

{  
res=strcmp(date,da);
    if(res==0)
    {
      printf("\n \n CUSTOMER NAME",name);
      printf("\n \n MOBILE NUMBER",mobile_number);
      printf("\n \n BOOKNAME",bookname);
      printf("\n \n BOOK COST",cost);

    }
  }
  fclose(fp);

}


int main()
{
int ch;
int n;
char lm[20];

while(n)
{

   printf("\n\t********WELCOME TO THE BOOKSHOP OF SHARMA STORE*******\n");
   printf("PRESS <1> TO CREATE ENTRY FOR BOOK\n");
   printf("PRESS <2> TO DISPLAY ON SPECIFIC DATE\n");
   printf("PRESS <0> TO  EXIT \n");
   printf("ENTER THE CHOICE:::\n");
   scanf("%d",&ch);
  
   
   switch(ch)
   {
    case 1:
    write();
    break;

    case 2:
    	printf("ENTER THE DATE::\n");
    	scanf("%s",lm);
    display(lm);
    break;


    case 0:
    exit(0);

    default:printf("INVALID SELECTION");
   }




printf("DO U WANT TO ENTER MORE DATA\n");
printf("PRESS <1> FOR ENTER MORE DATA\n");
printf("[PRESS <0> FOR EXIT \n");
scanf("%d",&n);
}

   

 }


