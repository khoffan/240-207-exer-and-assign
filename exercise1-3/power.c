#include<stdio.h>

int main(){
    int i,b,result=1;
	int p;
    printf("base: <");
    scanf("%d",&b);
    printf("power: <");
    scanf("%d",&p);
    for(i=1;i<=p;i++){
        result=result*b;
    }
    printf("= %d\n",result);
}
