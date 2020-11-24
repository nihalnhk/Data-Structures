#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
 int marks;
 printf("Enter the marks out of 20 : ");
 scanf("%d" , &marks);
 if(marks>10)
 {
 printf("\n Passed");
 }
 else
 {
 printf("\nFailed");
 }
 getch();
 }