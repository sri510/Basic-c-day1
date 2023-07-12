#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter the number: ");
scanf("%d",&num);
if(num%5==0)
printf("The number is a multiple of 5");
else
printf("The number is not a multiple of 5");
getch();
}