#include<stdio.h>
#include<conio.h>
void main()
{
int id, pass;
char name[20]="sri";
clrscr();
printf("Enter your id:");
scanf("%d",&id);
printf("Enter the password");
scanf("%d",&pass);
switch(id)
{
case 1001: printf("%s",name); break;
default : printf("Invaild details"); break;
}
getch();
}