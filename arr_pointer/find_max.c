#include <stdio.h>
#define LEN 5
int *max(int *p, int len);
int main()
{
    int d[LEN], i,*max_ptr;
    for (i = 0; i < LEN; i++)
    {
        printf("N%02d: ", i + 1);
        scanf("%d", &d[i]);
    }
    max_ptr = max(d,LEN);
    printf("=%d\n",*max_ptr);
     
    return 0;
}

int *max(int *p,int len){
    int i,*max = p;
    for(i=0;i<len;i++){
        if(*p > *max){
            *max = *p;
        }
        p++;
    }
    return max;
}
