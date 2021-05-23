#include<stdio.h>
#define max 100

void factors(int arr[max],int N){
    int num;
    int i,j;
    int cnt[max];
    int temp;
    for(i=0;i<N;i++){
        num = arr[i];
        cnt[i]=0;
        for(j=1;j<=num/2;j++){
            if(num%j==0){
            cnt[i]++;
            }
        }
        cnt[i]++;
    }

    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(cnt[i]<cnt[j]){
                temp=cnt[i];
                cnt[i]=cnt[j];
                cnt[j]=temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(i=0;i<N;i++){
        printf("%d->%d ",arr[i],cnt[i]);
    }
}
int main(){
    int arr[max];
    int i;
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    factors(arr,N);
    return 0;
}