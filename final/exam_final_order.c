#include<stdio.h>
#include<stdlib.h>

struct listnode{
    int data;
    struct listnode *next;
};
typedef struct listnode LN;

void insert_in_orders(LN *head,int data);
int main(){
    LN *head = NULL,*tmp,*tail,*count;
    int num = 1;
    head = (LN*)malloc(sizeof(LN));
    head->data = num;
    head->next = NULL;
    tail = head;
    while(num >= 0){
        insert_in_orders(tail,num);
        printf("Enter data: ");scanf("%d",&num);
    }
    while(tail != NULL){
        printf("%d",tail->data);
        tail = tail->next;
    }
    // for(int i=0;i<4;i++){
    //     *tmp = (LN*)malloc(sizeof(LN));
    //     tmp->data = num;
    //     tmp->next = NULL;
    //     tail->next = tmp;
    //     tail = tmp;
    // }
    while(tail != NULL){
        tmp = tail;
        tail = tail->next;
        free(tmp);
    }
    return 0;
}
void insert_in_orders(LN *head,int data){
    while(head->next != NULL){
        if(head->data <= data && head->next->data > data){
            LN *new_node;
            new_node = (LN*)malloc(sizeof(LN));
            new_node->data = data;
            new_node->next = NULL;
            head->next = new_node;
            new_node = new_node->next;
        }
        head = head->next;
    }
    head->next = NULL;
    if(data > head->data){
        LN *new_node;
        new_node = (LN*)malloc(sizeof(LN));
        new_node->data = data;
        new_node->next = NULL;
        head->next = new_node;
    }
}





