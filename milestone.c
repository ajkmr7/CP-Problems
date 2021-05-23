#include<stdio.h>

int main(){
    int M;
    int N;
    int S;
    int r=0,c=0;
    scanf("%d %d %d",&M,&N,&S);

    r=M/S;
    c=N/S;

    if(M%S!=0)
        r+=M%S;
    if(N%S!=0)
        c+=N%S;

    printf("%d",r*c);
}