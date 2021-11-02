#include<stdio.h>
main()
{
    int user_input;
    int raw=0;
    int sum=0;

    printf("Enter Number : ");
    scanf("%d",&user_input);
    printf("\n\n");
    while(user_input<0){printf("Invalid Number.\n\n");printf("Enter Number : ");scanf("%d",&user_input);printf("\n\n");}


      for(raw=0;raw<10;raw++)
        {
         sum=(user_input)*(raw+1);
         printf("%d * %d = %d",user_input,raw+1,sum);
         printf("\n");
         sum=0;
        }


    getch();
}
