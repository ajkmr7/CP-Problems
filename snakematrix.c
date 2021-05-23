#include<stdio.h>
void printSnakeMatrix(int N){
    int i;
    int j;
    int cnt=1;
    int flag=0;
    for(i=0;i<N;i++){
        for(j=N-i;j>=0;j--){
            printf(" ");
        }
        if(flag==0){
            for(j=0;j<N;j++){
                printf("%d",cnt++);
            }
            flag=1;
        }
        else{
            for(j=0;j<N;j++){
                printf("%d",cnt+N-j-1);
            }
            cnt=cnt+N;
            flag=0;
        }
        printf("\n");
    }
}
int main(){
    int N;
    scanf("%d",&N);
    printSnakeMatrix(N);
    return 0;
}