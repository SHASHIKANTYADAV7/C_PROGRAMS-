#include<stdio.h>
#include<conio.h>

int main()
{
      char Temp = '\0', cSrc[50] = {'\0'};
      int  i = 0, j = 0;

      puts("\n Enter A String => ");
      gets(cSrc);

      while(cSrc[i] != '\0')
      {
          i++;
      }
      i--;

      while(i > j)
      {
          Temp = cSrc[i];
          cSrc[i] = cSrc[j];
          cSrc[j] = Temp;

          i--;
          i++;
      }

      printf("\n Give String After Reverse Is = %s",cSrc);

      getch();
      return 0;
}
