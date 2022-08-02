#include <stdio.h>
#define LEN 5
int *find_max(int *p, int *q);
int main()
{
    int d[LEN], i,*max;
    for (i = 0; i < LEN; i++)
    {
        printf("N%02d: ", i + 1);
        scanf("%d", &d[i]);
    }
    for (i = 0; i < LEN; i++)
    {
        max=find_max(&d[i],&d[LEN]);
        printf("%d",*max);
    }
    
    // for(i=0;i<LEN;i++){
    //     printf("=%d\n",d[i]);
    // }
    // // printf("=%d\n",*find_max(&d[0],&d[LEN]));
    return 0;
}

int *find_max(int *p,int *q){
    int i;
    for(i=0;i<LEN;i++){
        if(*(p+i) < *q){
            *(p+i) = *q;
        }
        else{
            *(p+i);
        }
        return p;
    }  
    // if(p>q){
    //     return NULL;
    // }
    // else if(*p<=*q){
    //     *p = *q;
    //     return q;
    // }
}
