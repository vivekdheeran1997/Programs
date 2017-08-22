#include<stdio.h>
#include<conio.h>
int main()
{
int num;
clrscr();
printf("\n Enter the number");
scanf("%d",&num);
if(num > 0)
{
printf("\n number is postive");
}
else if(num < 0)
{
printf("\n numberis negative");
}
else
{
printf("\n number is zero");
}
return 0;
getch();
}
