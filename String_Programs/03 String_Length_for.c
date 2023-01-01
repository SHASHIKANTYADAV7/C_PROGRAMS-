#include<stdio.h>
#include<conio.h>

int main()
{
       char cSrc[50] = {'\0'};
       int Len = 0;

       puts("\n Enter A String => ");
       gets(cSrc);

       for(Len = 0; cSrc[Len] != '\0'; Len++);

       printf("\n Length Of Given Number Is = %d",Len);

       getch();
       return 0;
}
