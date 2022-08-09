#include<stdio.h>
struct track {
    char title[128];
    int duration;
};

typedef struct track Track;

void input_track(Track *t);
Track* longer(Track *ta,Track *tb);

int main(){
    Track t1,t2,*d=NULL;
    printf("TA: ");
    input_track(&t1);
    printf("TB: ");
    input_track(&t2);

    d=longer(&t1,&t2);
    printf("=%s\n: ");
}

void input_track(Track *t){
    scanf("%s %d",&t->title,&t->duration);
}

Track* longer(Track *ta,Track *tb){
    if(ta->duration>tb->duration)
        return ta;
    else
        return tb;
}