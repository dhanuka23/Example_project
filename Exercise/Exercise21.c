#include<stdio.h>
#define Size 3
int main(){
    float item[Size] = {90.00,20.00,55.00};
    int qtySold[Size]={0};
    int i=0;
    float temp;

    for(i=0;i<Size;i++){
        printf("Enter the Quantity :");
        scanf("%d",&qtySold[i]);
    }
    temp=item[0]*qtySold[0];
    for(i=1;i<Size;i++){
        while((item[i]*qtySold[i])<temp){
            temp=item[i]*qtySold[i];
        }
    }
    printf("Item array\n90.00");
    for(i=1;i<Size;i++){
        printf(",%0.2f",item[i]);
    }
    printf("\nqtySold array\n%d",qtySold[0]);
    for(i=1;i<Size;i++){
        printf(",%d",qtySold[i]);
    }
    for(i=0;i<Size;i++){
        if(temp==item[i]*qtySold[i]){
            printf("\nItem which genarate least income : %d",i+1);
        }
    }

    getch();
    return 0;
}
