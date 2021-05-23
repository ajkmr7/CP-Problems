#include<stdio.h>
#include<string.h>

int main(){

    char str[1000];
    scanf("%s",str);
    int open=0,close=0;
    int i;
    int j;
    int len;

    len=strlen(str);

    for(i=0,j=len-1;i<len;i++,j--){
        if(str[i]=='(')
            open++;
        else if(str[i]==')')
            open--;
        if(str[j]==')')
            close++;
        else if(str[j]=='(')
            close--;    
        if(open<0){
            str[i]=-1;
            open=0;
        }
        if(close<0){
            str[j]=-1;
            close=0;
        }
    }

    for(i=0;str[i];i++){
        if(str[i]!=-1){
            printf("%c",str[i]);
        }
        
    }
    return 0;
}