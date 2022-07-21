#include<stdio.h>

void psum(int *m,int *data);

int main(){
    int n,set = 1,m=0;
    do{
        printf("N: ");
        scanf("%d",&n);
        if(n == 0){
            set =0;
        }
        psum(&m,&n);
    }while(set != 0);
    printf("= %d",m);
    return 0;
}

void psum(int *m,int *data){
    *m = *m + *data;
}