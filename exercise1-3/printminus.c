#include <stdio.h>

int print_minus(int a[],int len);

int main(){
    int a[9],i,m;
    for(i=0;i<8;i++){
        printf("N%02d ",i+1);
        scanf("%d",&a[i]);
    }
    m = print_minus(a,8);
    printf("m= %d",m);
    return 0;
}
int print_minus(int a[],int len){
    int i;
    for(i=0;i<len;i++){
        if(a[i] < 0){
            printf("%d\n",a[i]);
            return a[i];
        }
    }
    return -1;
}