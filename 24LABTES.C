#include<stdio.h>
#include<conio.h>
void main()
{
int a=10, b=20;
clrscr();
printf("Before swp a=%d, b=%d\n", a,b);
a=a+b; b=a-b; a=a-b;
printf("After swap a=%d, b=%d\n", a,b);
getch();
}