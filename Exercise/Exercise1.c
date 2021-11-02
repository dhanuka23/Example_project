#include<stdio.h>
main(){

      int a;//a=Age
      int b=18;
      float c;//b=Account Balance
      float d=100000;
 //Getting inputs
      printf("Enter your Age :\n");
      scanf("%d",&a);
      printf("Enter your Account Balance :\n");
      scanf("%f",&c);

      if(a<=b && c<=d )
      {
        printf("Age : %d\nBank Balance :%0.2f\nGift : School Bag\n",a,c);
      }
      else if (a<=b && c>d )
      {
        printf("Age : %d\nBank Balance :%0.2f\nGift : Tablet\n",a,c);
      }
      if(a>b && c<=d )
      {
        printf("Age : %d\nBank Balance :%0.2f\nGift : Traveling Bag\n",a,c);
      }
      else if (a>b && c>d )
      {
        printf("Age : %d\nBank Balance :%0.2f\nGift : Rice Cooker\n",a,c);
      }
    getch();
     }
