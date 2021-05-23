#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    char str2[100];

    char flames[]="flames";

    int i,j;
    int len1,len2;
    int count;
    int rem;
    int ind;

    scanf("%s",str1);
    scanf("%s",str2);

    len1=strlen(str1);
    len2=strlen(str2);
    count=0;
    for(i=0;str1[i]!='\0';i++){
        if(str1[i]!=-1)
        for(j=0;str2[j]!='\0';j++){
            if(str2[j]!=-1)
            {
                if(str1[i]==str2[j]){
                str1[i]=-1;
                str2[j]=-1;
                count+=2;
                break;
                }
            }
        }
    }
    rem=len1+len2-count;
    ind =0;
    for(i=1;i<=5;i++){
        count=0;
        while(count!=rem){
            if(flames[ind%6]!=-1)
                count++;
            ind++;
        }
        
        flames[(ind-1)%6]=-1;
    }
    for(i=0;i<6;i++){
        if(flames[i]!=-1)
            printf("%c",flames[i]);
    }
    return 0;
}