#include <stdio.h>
#define LEN 5
int *find_max(int *p, int *q);
int main()
{
    int d[LEN], i,*max,*a;
    for (i = 0; i < LEN; i++)
    {
        printf("N%02d: ", i + 1);
        scanf("%d", &d[i]);
    }
    printf("=");
    for (i = 0; i < LEN; i++)
    {   
        max=find_max(d,&d[LEN]);
        printf(" %d",*max);
        *max = 0;
    }
    return 0;
}

int *find_max(int *p,int *q){
    int *i,*max = p;
    for(i=p;i<q;i++){
        if(*i > *max){
            max = i;
        }  
    }  
    return max;
    // if(p>q){
    //     return NULL;
    // }
    // else if(*p<=*q){
    //     *p = *q;
    //     return q;
    // }
}
