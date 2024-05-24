#include<bits/stdc++.h>
using namespace std;

struct pq{
    int value;
    int key;
};

class Q{
    public:

    int size;
    pq arr[];

    Q(int size, struct pq arr[]){
        this->size=size;
        
    }
    
};



int main(){
    pq arr[]={{ 60, 10 }, { 100, 20 }, { 120, 30 }};
    int size = sizeof(arr)/sizeof(arr[0]);
    Q qq(size,arr);
    




    return 0;
}