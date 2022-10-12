#include<stdio.h>
#include<stdlib.h>

struct listnoods{
    struct listnoods *next;
    char c;
    struct listnoods *prev;
};

typedef struct listnoods LN;

struct double_list{
    LN *head;
    LN *tail;
};

typedef struct double_list DLST;


DLST *str2dlst(const char* s);
void print(DLST *list);
void print_reverse(DLST *list);
void free_head(DLST *list);


int main(){
    DLST *data;
    char s[128];
    printf("Enter: "); scanf("%s",&s);
    data = str2dlst(s);
    print(data);
    print_reverse(data);
    free_head(data);
    return 0;
}

DLST *str2dlst(const char* s){
    DLST *dptr = (DLST*)malloc(sizeof(DLST));
    dptr->head = NULL;
    dptr->tail = NULL;
    while(*s != NULL){
        LN *cur = (LN*)malloc(sizeof(LN));
        cur->c = *s;
        cur->next = NULL;
        if(dptr->head == NULL && dptr->tail == NULL){
            cur->prev = NULL;
            dptr->head = cur;
            dptr->tail = cur;

        }
        else{
            cur->prev = dptr->tail;
            dptr->tail->next = cur;
            dptr->tail = cur;
        }
        s++;
    }
    return dptr;
}

void print(DLST *list){
    LN *cur = list->head;
    while(cur != NULL){
        printf("%c",cur->c);
        cur = cur->next;
    }
    printf("\n");
}

void print_reverse(DLST *list){
    LN *cur = list->tail;
    while(cur != NULL){
        printf("%c",cur->c);
        cur = cur->prev;
    }
    printf("\n");
}

void free_head(DLST *list){
    LN *cur = list;
    LN *tmp;
    while(cur != NULL){
        tmp = cur;
        cur = cur->next;
        free(tmp);
    }
    free(list);
}
