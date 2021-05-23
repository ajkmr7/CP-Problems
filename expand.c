#include<stdio.h>
#include<string.h>

int isalphabet(char ch){
    if(ch>='a'&&ch<='z')
        return 1;
    return 0;
}

int main(){
    char str[1000];
    scanf("%s",str);
    int len;
    len=strlen(str);
    int i,j;
    char ch;
    int count=0;
    int dig =1;
    i=0;
    while(str[i]!='\0'){
        count=0;
        dig=1;
        if(str[i]>='a'&&str[i]<='z'){
            ch=str[i];
            i+=1;
        }
        else{
            while(isalphabet(str[i])!=1&&str[i]!='\0'){
                count=count*dig;
                count+=str[i]-48;
                dig*=10;
                i+=1;
            }
            for(j=0;j<count;j++){
                printf("%c",ch);
            }
        }
    }
    return 0;
}