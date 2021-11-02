#include<stdio.h>
main()
{
    int count=0;
    int sum=0;
    int num;

       while(count<10)
        {
          printf("%d\n",count+1);
          sum+=count+1;
          count++;

        }

      printf("\n\nThe Sum is : %d",sum);





    getch();
}
