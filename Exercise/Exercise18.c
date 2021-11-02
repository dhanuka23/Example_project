#include<stdio.h>
#define Size 8
int main(){

    int num[Size];
    int i=0;
    int count=0;

    printf("Enter 8 Integers Between 1-4 :\n");

    for(i=0;i<Size;i++){
        scanf("%d",&num[i]);
     here:
        if(4<num[i] || num[i]<1){
            printf("\nInvalid Number!\n");
            scanf("%d",&num[i]);
            goto here;
        }
    }

    printf("Num Array : ");

    for(i=0;i<Size;i++){
        printf("%d ",num[i]);
    }

    for(i=0;i<Size;i++){
        if(num[i]==1 && num[i+1]==3){
                count=count+1;
                i++;
        }
    }

    printf("\nNumber of times pattern \"1-3\" appear : %d",count);


    getch();
    return 0;
}
