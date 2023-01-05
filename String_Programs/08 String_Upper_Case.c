#include<stdio.h>
#include<conio.h>

int main()
{
       char cSrc[50] = {'\0'};
       int i = 0;

       puts("\n Enter A Words => ");
       gets(cSrc);

       while(cSrc[i] != '\0')
       {
             if(cSrc[i] >= 'A' && cSrc[i] <= 'Z')
             {
                  cSrc[i] = cSrc[i] - 32;
             }
             i++;
       }

       printf("\n Upper Case Count Number => %s",cSrc);

       getch();
       return 0;
}
