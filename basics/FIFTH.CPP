#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
 int a,b,ch;
 printf("\nEnter first number: ");
 scanf("%d" , &a);
 printf("\nEnter second number: ");
 scanf("%d" , &b);
 printf("\n Enter your choice \n");
 printf("1. Addition \n 2.subtraction \n");
 scanf("\n %d",&ch);
 switch(ch)
 {
 case 1 : printf( "\nSum is %d ",a+b);
	  break;
 case 2 : printf("\n Difference is %d" , a-b);
	  break;
 default:printf("Invalid choice");
 }
 getch();
 }
