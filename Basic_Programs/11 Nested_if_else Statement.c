#include<stdio.h>
#include<conio.h>

int main()
{
       float Amount = 0.0;

       printf("\n Enter Your Account Balance => ");
       scanf("%d",&Amount);

       if(Amount > 1000)
       {
             printf("\n\n\t WELCOME TO MALL...");

             if(Amount > 10000)
             {
                   printf("\n You Can Be Prime Member Of This Mall...");
             }
                   printf("\n\t Have Nice Shopping...");
       }
       else
       {
             printf("\n\n\t Minimum Balance Required To Shop Here Is 1000+ \n");

             if(Amount > 500)
             {
                   printf("\t But You Can Visit Our Outlet At Corner....!");
             }
             else
             {
                   printf("\n\t You Are Not Eligible To Shop..!");
             }
       }

              printf("\n Thanks For Visit...!");

       getch();
       return 0;
}
