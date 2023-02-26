#include<stdio.h>
#include<conio.h>

int main()
{ 
     int Day = 0;
     
     printf("\n Enter Number(1-7) to View Day => ");
     scanf("%d",&Day);
  
     if(Day==1)
     {
           printf("\n\t Monday");
     }
     else if(Day==2)
     {
           printf("\n\t Tuesday");
     }
     else if(Day==3)
     {
           printf("\n\t Wednesday");
     }
     else if(Day==4)
     {
           printf("\n\t Thursday");
     }
     else if(Day==5)
     {
           printf("\n\t Friday");
     }
     else if(Day==6)
     {
           printf("\n\t Saturday");
     }
     else if(Day==7)
     {
           printf("\n\t Sunday");
     }
     else
     {
           printf("\n\t Invalid Day ...");
     }
  
     printf("\nThanks...\n\n"):
     
     getch();
     return 0;
}
