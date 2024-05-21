#include<bits/stdc++.h>
using namespace std;

int main(){

    fstream file;
    file.open("ex.txt",ios::in);

    if(!file){
        cout<<"no file";
    }
    int n;

    file>>n;
    int ajd[10][10];
    int graph1[n][n];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            file>>ajd[i][j];
        }
    }
   
     for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){

            if(ajd[i][j]==1){
                graph1[i][j]=1;
            }
            else{
                graph1[i][j]=0;
            }
            cout<<graph1[i][j];
        }
        printf("\n");
    }

}