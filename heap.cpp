#include<bits/stdc++.h>
using namespace std;


class heap{
    public:
        int arr[100];
        int size;

        heap(){
            arr[0]=-1;
            size=0;
        }
    

    
    void heapins(int node){
        
        size =size+1;
        int index =size;
        arr[index]=node;

        while(index>1){
            int parent=index/2;

            if(arr[index]>arr[parent]){
                swap(arr[index],arr[parent]);
                index=parent;
            }
            else{
                return;
            }
        }

    }

   

    void hdelete(){

        arr[1]=arr[size];
        size--;

        int i = 1;
        

        while(i<size){

        int left = i*2;
        int right= i*2 +1;
            
            if(arr[i]<arr[left] && left<=size && arr[left] > arr[right]){
                swap(arr[i],arr[left]);
                    
                    
            }
            if(arr[i]<arr[right] && right<=size && arr[right] > arr[left]){
                swap(arr[i],arr[right]);
                    
                    
            }
            else{
                return;
            }
        }
    }

     void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<"("<<i<<")"<<" ";
        }
    }
};


    void heapify(int arr[],int n,int i){
        int large =i;
        int left =i*2;
        int right=i*2 +1;
        
        if(left<=n && arr[large]<arr[left]){
            large=left;
        }
        if(right<=n && arr[large]<arr[right]){
            large=right;
        }

        if(large!=i){
            swap(arr[large],arr[i]);
            heapify(arr,n,large);
        }
    }

    void heapsort(int arr[], int n){
        int size=n;
        
        while(size>=1){
            
            swap(arr[size],arr[1]);
                size--;
            heapify(arr,size,1);
        }
    }




int main(){
    heap h;
    h.heapins(55);
    h.heapins(50);
    h.heapins(60);
    h.heapins(40);
    
    //h.print();
    cout<<endl;
    h.hdelete();

    //h.print();
    h.hdelete();
     cout<<endl;
  //  h.print();

    int arr[6]={-1,34,20,60,44,70};
    int n =5;
    cout<<"array : ";
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    for(int i=n/2+1;i>0;i--){
        heapify(arr,n,i);
    }
    cout<<"heapified : ";
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"sorted : ";
    heapsort(arr,n);
     for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    priority_queue<int, vector<int>,greater<int> >hq;
    hq.push(3);
    hq.push(4);
    hq.push(1);
    
    cout<<hq.top();
    return 0;
}