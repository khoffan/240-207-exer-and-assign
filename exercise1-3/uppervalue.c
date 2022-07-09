#include <stdio.h>

int main(){
    int arr[15];
    int i;
    double avg=0;
    for(i=1;i<=10;i++){
        printf("N%02d: ",i);
        scanf("%d", &arr[i]);
        avg += arr[i];
    }
    avg = avg/10;
    for (i=1;i<=10;i++){
        if(arr[i] > avg){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}