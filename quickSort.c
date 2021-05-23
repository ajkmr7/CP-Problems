#include<stdio.h>

int partition(int arr[],int left,int right,int pivot){
    int temp;
    while(left<=right){
        while(arr[left]<pivot){
            left++;
        }
        while(arr[right]>pivot){
            right--;
        }
        if(left<=right){
            temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;

            left++;
            right--;
        }
    }
    return left;
}

void quickSort(int arr[],int left,int right){
    if(left>right)
        return;
    int pivot = arr[(left+right)/2];
    int index = partition(arr,left,right,pivot);
    quickSort(arr,left,index-1);
    quickSort(arr,index,right);
}

int main(){
    int N;
    int arr[100];

    scanf("%d",&N);

    int i;
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    quickSort(arr,0,N-1);
    for(i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}