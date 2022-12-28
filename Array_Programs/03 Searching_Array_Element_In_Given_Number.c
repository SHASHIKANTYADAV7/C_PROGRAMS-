#include<stdio.h>
#include<stdio.h>

int main()
{
       int Arr[5] = {'\0'}, i = 0, Src = 0;

       printf("\n Enter Array Element = > ");

       for(i = 0; i < 5; i++)
       {
            printf("\n Enter Array Element %d => ",i+1);
            scanf("%d",&Arr[i]);
       }

            printf("\n Enter Searching Element => ");
            scanf("%d",&Src);

       for(i = 0; i < 5; i++)
       {
            if(Arr[i] == Src)
            {
                break;
            }
       }
       if(i < 5)
       {
            printf("\n Enter Element Found On Index");
       }
       else
       {
            printf("\n Enter Element Not Found ");
       }

       getch();
       return 0;
}
