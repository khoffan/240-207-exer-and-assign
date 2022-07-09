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
    if(u>0){
    	u *=1;
	}
	if(t>0){
		t *= 10;
	}
	if(h>0){
		h *= 100;
	}
	if(tt>0){
		tt*= 100;
	}
    printf("= %d+%d+%d+%d",tt,h,t,u);
    
}
