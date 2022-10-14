#include<stdio.h>
#include<stdlib.h>

struct listnode {
    char c;
    struct listnode *next;
};
typedef struct listnode LN;

LN *strnig2list(char *s);
void str_end(LN **hptr,char key);
void show_str(LN *hptr);

// รับค่า string มา1ขัอความ เพื่อตัดข้อึวาม 
// เช่น ถ้าเราใส่ hello เข้ามา และตัดตั้ง 'l' ข้อความที่จะแสดงจะเป็น he 
// ตอนนี้ได้แค่บางส่วนแต่เกือบได้แล้ว

int main(){
    LN *sp, *show;
    char str[128];
    printf("Enter: ");
    gets(str);
    sp = strnig2list(str);
    
    show = sp;
    while(show != '\0'){
        printf("%c",show->c);
        show = show->next;
    }
    printf("\n");
    str_end(&sp,'l');
    return 0;
}
LN *strnig2list(char *s){
    LN *head = NULL;
    LN *tail = NULL;
    LN *current = NULL;
    while(*s != '\0'){
        if(head == NULL){
            head = (LN*)malloc(sizeof(LN));
            head->c = *s;
            head->next = NULL;
            tail = head;
        }
        else{
            tail->next = (LN*)malloc(sizeof(LN));
            tail = tail->next;
            tail->c = *s;
        }
        tail->next = NULL;
        s++;
    }
    return head;
}
void str_end(LN **hptr,char key){
    LN *current = *hptr;
    LN *previous = NULL;
    LN *tmp;
    // while(current != NULL){
    //     printf("%c",current->c);
    //     current = current->next;
    // }
    while(current != '\0'){
        if(current == '\0'){
            printf("NO data");
        }
        else if(current->c == key){
            if(current == *hptr){
                *hptr = current->next;
            }
            previous = current;
            while(previous->next != current){
                previous = previous->next;
            }
            previous->next = current->next;
            tmp = current->next;
            free(tmp);
            tmp = NULL;
        }
        printf("%c",current->c);
        current = current->next;

    }
}
