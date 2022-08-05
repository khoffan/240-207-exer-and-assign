#include <stdio.h>
#include <math.h>
typedef struct 
{
    int x;
    int y;
}Point ;
void point_input(Point *p);;
float line_distance(Point *p1, Point *p2);
int main()
{   
    Point p1,p2;
    float Distance;
    printf("P1: %d %d ");
    point_input(&p1);
    printf("P2: %d %d ");
    point_input(&p2);
    Distance = line_distance(&p1,&p2);
    printf("=%.2f",Distance);
    return 0;
}
void point_input(Point *p){
    scanf("%d %d",&p->x,&p->y);
}
float line_distance(Point *p1, Point *p2){
    float d;
    d = sqrt(pow((p2->x - p1->x),2) + pow((p2->y - p1->y),2));
    return d;
}

