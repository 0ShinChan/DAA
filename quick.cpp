#include<bits/stdc++.h>
using namespace std;


int part(int *arr,int s, int e){

    int pivot=arr[s];
    int cnt=0;

    for(int i=s+1;i<e;i++){
        if(arr[i]<pivot){
            cnt++;
        }
    }

    int pindex=s+cnt;
    swap(arr[s],arr[pindex]);
    pivot= arr[pindex];

    int i=s;
    int j=e;

    while(i< pindex && j> pindex){

        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pindex && j>pindex){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }

    }

    return pindex;
}

void quicksort(int *arr,int s, int e){

    if(s>=e){
        return;
    }
    

    int p =part(arr,s,e);

    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}



int main(){
    int n;
    int arr[]={4,2,6,1,5};
    n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}