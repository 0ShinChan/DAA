#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int s,int e){

    int mid =(s+e)/2;

    int len1=mid-s+1;
    int len2 = e-mid;

    int a1[len1];
    int a2[len2];
    //main index
    int mind=s;

    // copy elements

    for(int i=0;i<len1;i++){
        a1[i]=arr[mind++];
    }
    for(int i=0;i<len2;i++){
        a2[i]=arr[mind++];
    }
    int index1=0;
    int index2=0;
    mind=s;
        while(index1<len1 && index2<len2){

            if(a1[index1]<a2[index2]){
                arr[mind++]=a1[index1++];
            }
            else{
                arr[mind++]=a2[index2++];
            }
        }
        while(index1<len1){
            arr[mind++]=a1[index1++];
        }
        while(index2<len2){
            arr[mind++]=a2[index2++];
        }

}






void mergesort(int *arr,int s,int e){

    if(s>=e){
        return;
    }
    int mid = (s+e)/2;

    mergesort(arr,s,mid);

    mergesort(arr,mid+1,e);

    //merge
    merge(arr,s,e);
}






int main(){
    int n;
    int arr[]={4,2,6,1,5};
    n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}