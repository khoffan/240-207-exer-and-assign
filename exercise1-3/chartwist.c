#include<stdio.h>
char char_twist(char c);
int main(){
    char c;
    while(1){
        printf("Char: ");
        scanf("\n%c",&c);
        if((c>=65&&c<=90)||(c>=97&&c<=122)){
            printf("%c\n",char_twist(c));
        }
        else{
            printf("End.");
            break;
        }
        
    }
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
        return 0;
    }
}