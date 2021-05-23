#include<stdio.h>
#define max 100
void duplicate(int arr[max],int N){
    int i,j,k=0;
    int dup[max][2];
    for(i=0;i<N-1;i++){
        dup[k][0]=0;
        dup[k][1]=1;
        for(j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                dup[k][0]=arr[i];
                dup[k][1]++;
            }
        }
        k++;
    }
    for(i=0;i<k;i++){
        printf("%d->%d\n",dup[i][0],dup[i][1]);
    }
}
int main(){
    int arr[max];
    int i;
    int N;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    duplicate(arr,N);
    return 0;
}