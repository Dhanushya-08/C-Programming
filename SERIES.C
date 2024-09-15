#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,j;
  float sum=0,fact=1;
  clrscr();
  printf("Enter n(1<=n<=8):");
  scanf("%d",& n);
  for(i=1;i<=n;i++)
  {
    fact=fact*(float)i;
    sum=(i/fact)+sum;
  }
  printf("The sum of the series:%.4f",sum);
  getch();
}
