#include<stdio.h>
#include<conio.h>
void main()
{
int rev=0, num, rem;
clrscr();
printf("Enter a Number:");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num/=10;
}
printf("Reverse =%d", rev);
getch();
}
