#include<stdio.h>
main()
{
    int user_input;
    int tables=0;
    int raw=0;
    int column=0;

    printf("Enter Number : ");
    scanf("%d",&user_input);
    printf("\n");
    while(user_input<0){printf("Invalid Number.Enter Number :");scanf("%d",&user_input);}
    for(tables=0;tables<user_input;tables++)
        {
         for(raw=0;raw<=tables;raw++)
            {
             for(column=0;column<=tables;column++){printf("%d ",tables+1);}
             printf("\n");
            }
            printf("\n");
        }



    getch();
}
