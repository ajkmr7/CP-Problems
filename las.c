#include<stdio.h>
#include<string.h>

int main(){
    int N;
    scanf("%d",&N);

    char str[100]="1";
    char ans[100];

    int itr,i,j,ind,count;

    if(N<=0)
        return;
    printf("%s",str);

    for(itr=1;itr<N;itr++){
        for(i=0,j=0;str[j]!='\0';j++){
            ind=0;
            count=0;
            if(str[i]==str[j]){
                count++;
            }
            else{
                ans[ind++]=count;
                ans[ind++]=str[i];
                i=j;
                count=1;
            }
        }
        ans[ind++]=count;
        ans[ind++]=str[i];
        ans[ind]='\0';
        strcpy(str,ans);
        printf("%s",str);
    }    

    return 0;
}