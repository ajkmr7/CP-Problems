#include<stdio.h>
#include<string.h>

void permutation(char str[1000],int start,int end){
    int i;
    int temp;
    if(start==end)
        printf("%s\n",str);
    else{
        for(i=start;i<=end;i++){
        temp=str[start];
        str[start]=str[i];
        str[i]=temp;
        permutation(str,start+1,end);
        temp=str[start];
        str[start]=str[i];
        str[i]=temp;
        }
    }
}

int main(){
    char str[1000];
    scanf("%s", str);
    int len;
    len=strlen(str);

    permutation(str,0,len-1);
    return 0;
}