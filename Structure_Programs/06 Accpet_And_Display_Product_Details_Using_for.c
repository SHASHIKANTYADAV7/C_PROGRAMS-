#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Product
{
          int P_ID;
          char Name[20];
          float P_Price;
          float S_Price
};

int main()
{
          int i = 0;
          struct Product Prod[20];

          printf("\n *****Accepting Product Details*****\n");

          for(i = 0; i < 20; i++)
          {
                 printf("\n Enter Product ID => ");
                 scanf("%d",&Prod[i].P_ID);

                 fflush(stdin);

                 printf("\n Enter Product Name => ");
                 gets(Prod[i].Name);

                 printf("\n Enter Purchase Price => ");
                 scanf("%f",&Prod[i].P_Price);

                 printf("\n Enter Selling Price => ");
                 scanf("%f",&Prod[i].S_Price);
          }

          getch();
          system("cls");

          printf("\n *****Displaying Product Details*****\n");

          for(i = 0; i < 20; i++)
          {
                 printf("\n *****Product %d Details *****\n ID => %d \n Name => %s \n Purchase Price => %0.2f \n Selling Price => %0.2f",i+1,Prod[i].P_ID,Prod[i].Name,Prod[i].P_Price,Prod[i].S_Price);
          }

          printf("\n Thanks...");
          getch();
          return 0;
}