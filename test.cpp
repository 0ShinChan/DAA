#include<iostream>
#include<string>
using namespace std;
int main(){
    int a=10;
    int *b=&a;
    cout<<*b<<endl;
    *b=1;
    cout<<b<<endl;
}
