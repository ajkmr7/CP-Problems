#include<stdio.h>
void printMirrorImage(int N){
    int i;
    int j;
    int cur;
    for(i=0;i<N;i++){
        for(j=N-i;j>0;j--){
            printf(" ");
        }
        cur=i;
        do{
            printf("%d",cur);
            cur--;
        }while(cur>=0);
        cur=0;
        while(cur!=i){
            cur++;
            printf("%d",cur);
        }
        printf("\n");
    }
}
int main(){
    int N;
    scanf("%d",&N);
    printMirrorImage(N);
    return 0;
}