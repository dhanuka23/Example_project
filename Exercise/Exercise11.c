#include<stdio.h>
#include<stdlib.h>
int main(){
    int passowrd=2386;
    float acbalance=12589.56;
    char name[30]="KULATHILAKA D N";
    int pw;
    float ui;
    char ui1;
    float cal;

    printf("Enter Your Password : ");

    scanf("%d",&pw);

    if (pw==23866){

        again:

        printf("\nDear Mr.%s",name);

        printf("\nYour Account Balance is : %0.2f",acbalance);

        printf("\nEnter the amount that you wish to withdraw : ");

        scanf("%f",&ui);

        cal=acbalance-ui;

        acbalance=cal;

        printf("\nYour Account Balance is : %0.2f",cal);

        printf("\nDo you want any other service (Y|N) : ");

        scanf("\n%c",&ui1);

        if(ui1=='Y'){if(acbalance==0.00){printf("\n\tYou can't make any withdrawal");getch();exit(0);}
                        goto again;
                    }

        else if(ui1=='N'){getch();exit(0);}
    }

    else{printf("INVALID PASSWORD\nTRY AGAIN\n");goto again;}

    getch();

    return 0;
}

