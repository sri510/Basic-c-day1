#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter the number: ");
scanf("%d",&num);
if(num>0)
printf("%d is positive number", num);
else if(num<0)
printf("%d is negetive number", num);
else if(num==0)
printf("%d is zero",num);
getch();
}