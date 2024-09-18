#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,k,num,c=1;
 clrscr();
 printf("Enter no. of rows to be printed:");
 scanf("%d",& n);
 for(i=1;i<=n;i++)
 {
  for(k=1;k<=n-i;k++)
  {
    printf(" ");
  }
  for(num=1;num<=i;num++)
    {
      printf("%d\t",c++);
    }

    printf("\n");
 }
 getch();
}

