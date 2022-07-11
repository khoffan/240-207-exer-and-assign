#include <stdio.h>

int detA(int a[3][3]);

int main()
{

    int a[3][3], i=0,deta;
    while(i<1000){
        int j=0;
        while(j<1000){
            if(a[i][j] < 0){
                printf("a[%d][%d]: ",i+1,j+1);
                scanf("%d",&a[i][j]);
                break;
            }
            j++;
        }
        if(a[i][j] < 0){
            break;
        }
        i++;
        deta = detA(a[i][j]);
    }
    printf("\nThe matrix is %d\n",deta);
    // for (i = 0; i < 3; i++)
    // {
    //     printf("\n");
    //     for (j = 0; j < 3; j++)
    //         printf("%d\t", a[i][j]);
    // }

    return 0;
}
int detA(int a[3][3]){
    int determinant;
    determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);

   return determinant;
}