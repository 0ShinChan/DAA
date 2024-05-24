#include<bits/stdc++.h>
using namespace std;




void maxmin(int arr[],int i,int j,int &max_e,int &min_e){

    if(i==j){
        max_e=arr[i];
        min_e=arr[j];
        return;
    }
    if(j==i+1){
        max_e=max(arr[i],arr[j]);
        min_e=min(arr[i],arr[j]);
        return;
    }
    else{

        int mid=(i+j)/2;
            int max1,max2;
            int min1,min2;
            maxmin(arr,i,mid,max2,min2);
            maxmin(arr,mid+1,j,max1,min1);

            max_e=max(max1,max2);
            min_e =min(min1,min2);
    

    
   
    }
         
}

int main(){
    int n;
    int arr[]={4,2,6,1,5};
 
    n=sizeof(arr)/sizeof(arr[0]);
 
    int max= INT_MIN;
    int min=INT_MAX;
    maxmin(arr,0,n-1,max,min);
   
    cout<<max<<min;
    return 0;
}
