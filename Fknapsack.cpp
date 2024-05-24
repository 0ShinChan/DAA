#include<bits/stdc++.h>
using namespace std;

struct item{

    int value;
    int weight;

    item(int value,int weight){
        this->value=value;
        this->weight=weight;
    }

};

// static bool comp( struct item a, struct item b){

//     bool r1 =(bool)a.value/(bool)a.weight;
//     bool r2= (bool)b.value/(bool)b.weight;

//     return r1 > r2;
// }

double knapsack(struct item arr[], int cap, int n){

    sort(arr,arr+n,[](item a, item b){ return ((bool)a.value/(bool)a.weight >  (bool)b.value/(bool)b.weight);
    });
    

    double final=0.0;

    for(int i=0;i<n;i++){

        if(arr[i].weight <= cap){
            cap -=arr[i].weight;
            final +=arr[i].value;
        }
        else{
            final += arr[i].value*((double)cap/(double)arr[i].weight);
        }
    }

    return final;
}




int main(){
    item arr[]={{ 60, 10 }, { 100, 20 }, { 120, 30 }};
    int n = sizeof(arr)/sizeof(arr[0]);
    int w =50;

   cout<< knapsack(arr,w,n);


    return 0;
}