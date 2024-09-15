#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,sum=0;
  clrscr();
  printf("Enter the value of n:");
  scanf("%d",& n);
  for(i=1;i<=n;i++)
  {
    sum+=i;
  }
  printf("The sum is:%d",sum);
  getch();
}