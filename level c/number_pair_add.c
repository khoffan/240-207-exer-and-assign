#include<stdio.h>
typedef struct {
    int u;
    int v;
} Pair;
typedef struct {
    Pair x;
    Pair y;
} Nums;
void input_num(Pair *pp);
void add(Pair *rp, Nums *np);

int main(){
    Nums n;
    Pair r;
    printf("PA ");
    input_num(&(n.x));
    printf("Pb ");
    input_num(&(n.y));

    add(&r,&n);

    printf(" (%d %d)",r.u,r.v);
}
void input_num(Pair *pp){
    scanf("%d %d",&pp->u,&pp->v);
}

void add(Pair *rp, Nums *np){
    rp->u = np->x.u + np->y.u;
    rp->v = np->x.v + np->y.v;
}
