#include<stdio.h>
#include<conio.h>
#include<string.h>

struct product
{
       int P_ID;
       char Name[20];
       float P_Price;
       float S_Price;
};

int main()
{
       struct product Prod1, Prod2, Prod3 = {103,"Book",199,300};

       Prod1.P_ID = 101;
       strcpy(Prod1.Name,"Pen");
       Prod1.P_Price = 5;
       Prod1.S_Price = 10;

       printf("\n Enter ID => ");
       scanf("%d",&Prod2.P_ID);

       fflush(stdin);

       printf("\n Enter Name => ");
       gets(Prod2.Name);

       printf("\n Enter Purchase Price => ");
       scanf("%f",&Prod2.P_Price);

       printf("\n Enter Selling Price =>");
       scanf("%f",&Prod2.S_Price);

       printf("\n\n 1st Product Details => \n\n ID = %d \n Name = %s \n Purchase Price = %0.2f \n Selling Price = %0.2f",Prod1.P_ID,Prod1.Name,Prod1.P_Price,Prod1.S_Price);
       printf("\n\n 2nd Product Details => \n\n ID = %d \n Name = %s \n Purchase Price = %0.2f \n Selling Price = %0.2f",Prod2.P_ID,Prod2.Name,Prod2.P_Price,Prod2.S_Price);
       printf("\n\n 3rd Product Details => \n\n ID = %d \n Name = %s \n Purchase Price = %0.2f \n Selling Price = %0.2f",Prod3.P_ID,Prod3.Name,Prod3.P_Price,Prod3.S_Price);

       getch();
       return 0;

}
