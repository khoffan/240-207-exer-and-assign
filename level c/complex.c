#include <stdio.h>

typedef struct 
{
    int real;
    int img;
}Complex ;
void input_complex(Complex *cptr);
void add_complex(Complex *rptr,Complex *aptr,Complex *bptr);
int main()
{   
    Complex a,b,result;
    printf("C-A");
    input_complex(&a);
    printf("C-b");
    input_complex(&b);
    
    add_complex(&result,&a,&b);
    printf("=%d%+di",result.real,result.img);
    return 0;
}
void input_complex(Complex *cptr){
    scanf("%d %d",&cptr->real,&cptr->img);
}
void add_complex(Complex *rptr,Complex *aptr,Complex *bptr){
    rptr->real = aptr->real+bptr->real;
    rptr->img = aptr->img+bptr->img;
}

