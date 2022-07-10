#include<stdio.h>
#include <string.h>

char char_next(char c);
char char_twist(char c);

int main(){
    char c,str[256],ch;
    int i=0,len,sum;
    while(c != EOF){
        c = getchar();
        ch = char_twist(char_next(c));
        str[i] = ch;
        i++;
        sum = strlen(str);
    }
    len = (sum/2)-4;
    printf("%d\n",sum);
    printf("%d\n",len);
    printf("%d\n",sizeof(EOF));
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
    if(c>=65 &&c<=90)
        return c+1;
    else if(c>=97 &&c<=122)
        return c+1;
    else if(c==90)
        return 65;
    else if(c==122)
        return 122;
    else{
        return c;
    }
}