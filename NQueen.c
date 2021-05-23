#include<stdio.h>
#include<stdlib.h>

int count =0;
void printBoard(char **chess){
    int i,j;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            printf("%c ",chess[i][j]);
        }
        printf("\n");
    }
    count++;
    printf("\n\n");
}

int check(char** chess,int row,int col){
    int i;
    int j;

    for(i=0;i<row;i++){
        if(chess[i][col] == 'Q'){
            return 0;
        }
    }
    for(i=0;i<col;i++){
        if(chess[row][i] =='Q'){
            return 0;
        }
    }
    for(i=row,j=col;i>=0&&j>=0;i--,j--){
        if(chess[i][j] == 'Q'){
            return 0;
        }
    }
    for(i=row,j=col;i>=0&&j<=7;i--,j++){
        if(chess[i][j] == 'Q'){
            return 0;
        }
    }
    return 1;
}

void queen(char **chess,int row){
    int i,j;
    int col;
    if(row==8){
        printBoard(chess);
        return;
    }
    for(col=0;col<8;col++){
        if(check(chess,row,col)==1){
            chess[row][col]='Q';
            queen(chess,row+1);
            chess[row][col]='-';
        }
    }
}

int main(){

    char** chess;
    int i,j;

    chess = (char**) malloc(8*sizeof(char*));
    for(i=0;i<8;i++){
        chess[i] = (char*) malloc(8*sizeof(char));
    }
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            chess[i][j] = '-';
        }
    }
    queen(chess,0);
    printf("%d",count);
    return 0;
}