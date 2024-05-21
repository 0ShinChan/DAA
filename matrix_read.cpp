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
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            file>>ajd[i][j];
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            printf("%3d",ajd[i][j]);
        }
        printf("\n");
    }

    cout<<ajd[0][0];

}