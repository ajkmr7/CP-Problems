#include<stdio.h>

void convert(int N){
    char ones [][10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    char tens [][10] = {"Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    int num;
    num = N;
    int cnt=0;
    while(num>0){
        num=num/10;
        cnt++;
    }
    if(cnt==1){
        printf("%s",ones[N]);
    }
    else if(cnt==2){
        printf("%s %s",tens[(N/10)-1],ones[N%10]);
    }
    else if(cnt==3){
        printf("%s hundred and %s %s",ones[N/100],tens[((N/10)-1)%10],ones[N%10]);
    }
}

int main(){
    int N;
    scanf("%d",&N);
    convert(N);
    return 0;
}