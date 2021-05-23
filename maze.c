#include<stdio.h>
#include<stdlib.h>

int sol[10][10];
int findPath(int** mat,int r,int c){
    if(mat[r][c]==9){
        return 1;
    }
    if(mat[r][c]==1){
        sol[r][c]=1;
        if(c<3 && sol[r][c+1]!=1 && findPath(mat,r,c+1)==1){
            return 1;
        }//right
        if(r<3 && sol[r+1][c]!=1 && findPath(mat,r+1,c)==1){
            return 1;
        }//down
        if(c>0 && sol[r][c-1] && findPath(mat,r,c-1)==1){
            return 1;
        }//left
        if(r>0 && sol[r-1][c] && findPath(mat,r-1,c)==1){
            return 1;
        }//up
        sol[r][c]=0;    
        return 0;
    }
    return 0;

}

int main(){
    int m,n;
    int** mat;
    int i,j;

    scanf("%d %d",&m,&n);
    mat = (int**) malloc(n*sizeof(int*));
    for(i=0;i<n;i++){
        mat[i] = (int*) malloc(m*sizeof(int));
    }
    //Dynamic Memory Allocation for a matrix

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }


    if(findPath(mat,0,0)==1){
        printf("Path found!");

    }
    else{
        printf("Couldn't find a path!");
    }

    return 0;
}