#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,k;
 clrscr();
 printf("No. of lines to be printed:");
 scanf("%d",& n);
 for(i=1;i<=n;i++)
 {
   for(k=1;k<=i;k++)
   {
     printf("*");
   }
   printf("\n");
 }
 getch();
}