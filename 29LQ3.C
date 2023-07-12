#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the number: ");
scanf("%d%d%d",&a,&b,&c);
if(a+b>c&&b+c>a&&c+a>b)
printf("The triangle is valid.");
else
printf("The triangle is not valid.");
getch();
}