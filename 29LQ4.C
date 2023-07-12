#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the lengths of the sides of the triangle: ");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c)
printf("The triangle is an equilateral triangle.");
else if(a==b || b==!c || c==a)
printf("The triangle is an isosceles trianlge.");
else
printf("The triangle is an scalene triangle.");
getch();
}