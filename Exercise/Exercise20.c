#include<stdio.h>
#define Size 5
int main(){

    int rate[Size]={0};
    int i=0;

    for(i=0;i<Size;i++){
      here:
        printf("Pls input the service rating (1-5):");
        scanf("%d",&rate[i]);
        if(rate[i]<1||rate[i]>5){
            printf("ERROR\n");
            goto here;
        }
    }
    printf("Rating           Number of Response");
    for(i=0;i<Size;i++){
        printf("\n%d                %d",i+1,rate[i]);
    }

    getch();
    return 0;
}
