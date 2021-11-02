#include<stdio.h>
#include<stdlib.h>
main(void){
    int itemcode;//item code
    char custype;//customer type
    int quantity;//quantity
    float billamount;//bill amount
    float discount;//discount
    float total;//Last Price


    printf ("Enter the Item Code(1|2|3) : \n");
    scanf("%d",&itemcode);

    if(itemcode!=1 && itemcode !=2 && itemcode!=3){printf("ERROR\n"); break;}//If customer enters a wrong item number programme will stop

    printf ("Enter the Quantity that you want : \n");
    scanf("%d",&quantity);
    printf("Enter Your Customer Type(L|N) : \n");
    scanf("\n%c",&custype);

    if(custype!='L' && custype !='N'){printf("ERROR\n"); exit(EXIT_FAILURE);}//If customer enters a wrong Loyalty type programme will stop


    if (itemcode==1 && custype=='L')
    {

        billamount=530.00*quantity;
        discount=(billamount*25)/100;
        total=billamount-discount;

        printf("Your Bill Amount : %0.2f\nYour Discount : %0.2f\nYour Bill Amount After the Discount : %0.2f",billamount,discount,total);
    }
    else if ( itemcode==1 && custype=='N' )
    {
        billamount=530.00*quantity;
        discount=(billamount*5)/100;
        total=billamount-discount;
        printf("Your Bill Amount : %0.2f\nYour Discount : %0.2f\nYour Bill Amount After the Discount : %0.2f",billamount,discount,total);
    }
    else if ( itemcode==2 && custype=='L')
    {
        billamount=300.00*quantity;
        discount=(billamount*25)/100;
        total=billamount-discount;
        printf("Your Bill Amount : %0.2f\nYour Discount : %0.2f\nYour Bill Amount After the Discount : %0.2f",billamount,discount,total);
    }
    else if (itemcode==2 && custype=='N')
    {
        billamount=300.00*quantity;
        discount=(billamount*5)/100;
        total=billamount-discount;
        printf("Your Bill Amount : %0.2f\nYour Discount : %0.2f\nYour Bill Amount After the Discount : %0.2f",billamount,discount,total);
    }
        else if (itemcode==3 && custype=='L')
    {
        billamount=950.00*quantity;
        discount=(billamount*25)/100;
        total=billamount-discount;
        printf("Your Bill Amount : %0.2f\nYour Discount : %0.2f\nYour Bill Amount After the Discount : %0.2f",billamount,discount,total);
    }
        else if (itemcode==3 && custype=='N')
    {
       billamount=950.00*quantity;
        discount=(billamount*5)/100;
        total=billamount-discount;
        printf("Your Bill Amount : %0.2f\nYour Discount : %0.2f\nYour Bill Amount After the Discount : %0.2f",billamount,discount,total);
    }

getch();
}
