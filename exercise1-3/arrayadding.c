#include <stdio.h>
 void arr_adding(int a[],int b[],int len);
 void arr_input(int a[],int len,int set);

 int main(){
    int a1[6],a2[6],a3[6],i;
    int b1[6],b2[6],b3[6];
    arr_input(a1,5,1);
    printf("----------\n");
    arr_input(a2,5,2);
    printf("----------\n");
    arr_input(a3,5,3);
    // for(i=0;i<5;i++){
    //     printf("%d ",a1[i]);
    // }
    // for(i=0;i<5;i++){
    //     printf("%d ",a2[i]);
       
    // }
    
    arr_adding(a1,a2,5);
    arr_adding(a3,a1,5);
    for(i=0;i<5;i++){
        printf("%d ",a3[i]);
    }
    
    return 0;
 }

void arr_input(int a[],int len,int set){
    int i;
    for (i=0;i<len;i++){
        printf("S%d-%02d= ",set,i+1);
        scanf("%d",&a[i]);
    }
}

void arr_adding(int a[],int b[],int len){
    int i;
    for (i=0;i<len;i++){
        a[i] += b[i]; 
    }
    
}