#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("Enter age");
scanf("%d,",&age);
age>=18 ? printf("eligble for vote"): printf("not eligable for vote");
getch();
}
