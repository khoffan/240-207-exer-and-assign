#include<stdio.h>
#define num 5

int *max(int *a,int *b);

int main(){
    int i,m=NULL,n;

    for(i=0;i< num ;i++){
        printf("N%d: ",i+1);
        scanf("%d",&n);
        max(&m,&n);
    }
    printf("= %d",m);
    return 0;
}

int *max(int *a,int *b){
    if(*b > *a){
        *a = *b;
    }
    
}