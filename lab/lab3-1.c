#include <stdio.h>
#define NUM 5
int sum(int *p, int *q);
int main()
{
    int i, a[NUM],summa = 0;
    for (i = 0; i < NUM; i++)
    {
        printf("N%02d:", i + 1);
        scanf("%d", &a[i]);
    }
    // for (i = 0; i < NUM; i++)
    // {
    //     printf("%d\n",a[i]);
    // }
    summa = sum(&a[0], &a[NUM]);
    printf("=%d\n", summa);
    return 0;
}
int sum(int *p, int *q){
    int total=0;//a = *p ,b = *(q-1) ,;
    while(p <= (q-1)){
        total = total + *p;
        p++;
        
    }
    return total;
}
