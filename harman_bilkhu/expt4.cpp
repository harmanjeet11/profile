#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n;
 printf("Enter number of lines:");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
  for(int k=1;k<=n-i;k++)
  {
   printf(" ");
  }
  for(int j=1;j<=i;j++)
  {
   printf("%d",2*j-1);
  }
  printf("\n");
 }
 printf("\nCompiled and executed by Harmanjeet Singh Bilkhu");
 getch();
}