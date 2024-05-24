#include<bits/stdc++.h>
#define N 4
using namespace std;

void printQ(int board[N][N]){

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(board[i][j]){
                cout<<" Q ";
            }
            else{
                cout<<" . ";
            }
            
        }cout<<endl;
    }

}


bool issafe(int board[N][N],int row,int col){
    int i,j;
    for( i=0;i<col;i++){
        if(board[row][i])
            return false;
    }

    for(i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j])
            return false;
    }
    for(i=row,j=col;i<N && j>=0;i++,j--){
        if(board[i][j])
            return false;
    }

    return true;

}

bool solveUntil(int board[N][N],int col){

    if(col>=N)
        return true;
    
    for(int i=0; i<N;i++){

        if(issafe(board,i,col)){
            board[i][col]=1;

            if(solveUntil(board,col+1))
                return true;
            
        board[i][col]=0;
        }

    }

    return false;

}



bool solve(){
    
    int board[N][N];

    if(solveUntil(board,0)==false){
        cout<<"NO Queens are placed!";
        return false;
    }
        printQ(board);
    return true;

}



int main(){
    
    solve();
}