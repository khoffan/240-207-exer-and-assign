#include <stdio.h>
#include <math.h>
struct point
{
    int x;
    int y;
};
typedef struct point Point;
Point point_input();
float line_distance(Point p1, Point p2);
int main()
{   
    Point p1,p2;
    float Distance;
    p1 = point_input();
    p2 = point_input();
    printf("P1: %d %d \n",p1.x,p1.y);
    printf("P2: %d %d \n",p2.x,p2.y);
    Distance = line_distance(p1,p2);
    printf("=%.2f",Distance);
    return 0;
}
Point point_input(){
    Point p;
    scanf("%d %d",&p.x,&p.y);
    return p;
}
float line_distance(Point p1, Point p2){
    float d;
    d = sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
    return d;
}
