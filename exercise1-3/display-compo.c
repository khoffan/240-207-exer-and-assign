#include<stdio.h>
void display_com(int n);

int main(){
    int n;
    printf("Enter: ");
    scanf("%d",&n);
    display_com(n);
}
void display_com(int n){
    int m,u,t,h,tt;
    u = n%10;
    t = (n/10)%10;
    h = (n/100)%10;
    tt = (n/1000)%10;
    if(u>0&&t>0&&h>0&&tt>0){
        printf("= %d+%d+%d+%d",tt*1000,h*100,t*10,u);
    }
    if(t>0&&h>0&&tt>0){
        printf("= %d+%d+%d",tt*1000,h*1000,t*10);
    }
    if(u>0&&h>0&&tt>0){
        printf("= %d+%d+%d",tt*1000,h*100,u);
    }
    if(u>0&&t>0&&tt>0){
        printf("= %d+%d+%d",tt*1000,t*10,u);
    }
    if(u>0&&t>0&&h>0){
        printf("= %d+%d+%d",h*100,t*10,u);
    }
    
    
}
