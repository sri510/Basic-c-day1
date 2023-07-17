#include<stdio.h>
#include<conio.h>
void main()
{
int n, f=1,temp;
clrscr();
printf("Enter a Number");
scanf("%d",&n);
temp=n;
while (n!=0)
{
f=f*n;
n--;
}
printf("Factorial of %d is %d",temp,f);
getch();
}