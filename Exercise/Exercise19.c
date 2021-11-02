#include<stdio.h>
#define Size 6
int main(){

    int arrNum[Size]={0};
    int i=0;

    printf("Enter Values to the Array : \n");
    for(i=0;i<Size;i++){
        scanf("%d",&arrNum[i]);
    }
    int max=arrNum[0];
    for(i=1;i<Size;i++){
        while(max<arrNum[i]){
            max=arrNum[i];
        }
    }
    if(max==arrNum[5]){
        printf("Numbers Are Stored In Ascending Oder.");
    }
    else{
        printf("Numbers Are Not Stored In Ascending Oder.");
    }
    getch();
    return 0;
}
