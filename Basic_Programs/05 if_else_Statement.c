#include<stdio.h>
#include<conio.h>

int main()
{
      int n;

      printf("\n Enter Any Number => ");
      scanf("%d",&n);

      if(n >= 0)
      {
           printf("\n Positive Number");
      }
      else
      {
           printf("\n Negative Number");
      }

      getch();
      return 0;
}
