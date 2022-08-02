#include <stdio.h>
#define LEN 5
int *max(int *p, int *q);
int main()
{
    int d[LEN], i,tmp;
    for (i = 0; i < LEN; i++)
    {
        printf("N%02d: ", i + 1);
        scanf("%d", &d[i]);
    }
    // for(i=0;i<LEN;i++){
    // }
    printf("=%d\n",*max(&d[0],&tmp));
     
    return 0;
}

int *max(int *p,int *q){
    int i,j;
    for (i =0;i<LEN;i++){
        for (j=i+1;j<LEN;j++){
            if(*(p+i) > *(p+j)){
                *q = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = *q;
            }
        }
    }
    return q;
}
