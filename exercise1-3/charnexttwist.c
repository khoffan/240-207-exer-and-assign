#include<stdio.h>

char char_next(char c);
char char_twist(char c);

int main(){
    char str[256];
    int i=0,c,ch;
    while(c != EOF){
        c = getchar();
        ch = char_next(char_twist(c));
        str[i] = ch;
        i++;
    }
    printf("%s",str);
    return 0;
}

char char_twist(char c){
    if(c>=65&&c<=90){
        c+=32;
        return c;
    }
    else if(c>=97&&c<=122){
        c-=32;
        return c;
    }
    else{
        return c;
    }
}

char char_next(char c){
    if(c==90)
        return c-25;
    else if(c>=65 &&c<=90)
        return c+1;
    else if(c==122)
        return c-25;
    else if(c>=97 &&c<=122)
        return c+1;
    else{
        return c;
    }
}