#include <stdio.h>
#define LEN 10
int *max(int *p, int *q);
int main()
{
    int d[LEN], i,m,n,*max_ptr;
    for (i = 0; i < LEN; i++)
    {
        printf("N%02d: ", i + 1);
        scanf("%d", &d[i]);
    }
    printf("Scope= ");
    scanf("%d %d",&m,&n);
    
    
    max_ptr = max(d+m,d+n);
    printf("=%d\n",*max_ptr);
     
    return 0;
}

int *max(int *p,int *q){
    int *i,*max = p;
    for(i=p;i<=q;i++){
        if(*i > *max){
            *max = *i;
        }
    }
    return max;
}
