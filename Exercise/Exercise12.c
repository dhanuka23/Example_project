#include<stdio.h>
void converting(int get);
int main(){

    int ui;

    printf("Enter Your Decimal Number : ");

    scanf("%d",&ui);

    converting(ui);

    getch();

    return 0;
}
void converting(int get){

    int temp=0,remain,i=1;

    while(get != 0){

        remain=get%2;
        temp=temp+remain*i;
        i=i*10;
        get=get/2;
    }
    printf("\nYour Binary Value is : %d",temp);

}
