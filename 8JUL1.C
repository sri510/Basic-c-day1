#include<stdio.h>
#include<conio.h>
void main()
{
int n, i, sum=0;
clrscr();
printf("Enter the value of N:");
scanf("%d",&n);
i=1;
while(i <= n)
{
sum += i;
++i;

}
printf("sum is=%d",sum);
getch();
}

