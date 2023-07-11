#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,op;
clrscr();
printf("Enter Two NUmbers");
scanf("%d%d",&a,&b);
switch(a>b)
{
case 0:
if(a<b)
printf("%d is maximun",b);
else
printf("%d is equal as %d",a,b);
break;

case 1:
printf("%d is maximum",a);
break;
default : printf("Equal");
}
getch();
}