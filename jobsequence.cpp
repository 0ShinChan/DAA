// C program for the above approach
#include<bits/stdc++.h>
using namespace std;

// A structure to represent a job
struct job{
    int id;
    int dead;
    int profit;
};



int min(int a, int b){
    return(a>b)? a:b;
}


void printJobScheduling( struct job arr[],int n){

    sort(arr,arr+n,[](job a, job b){return (a.profit > b.profit);});
   
    int res[n];
    vector<int>sl(n,false);

    for(int i=0;i<n;i++){
        for(int j=arr[i].dead-1;j>=0;j--){

            if(!sl[j]){
                sl[j]=true;
                res[j]=i;
                break;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(sl[i]){
            printf("%c ",arr[res[i]].id);
        }
    }

}

// Driver's code
int main()
{
	job arr[] = { { 'a', 2, 100 },
				{ 'b', 1, 19 },
				{ 'c', 2, 27 },
				{ 'd', 1, 25 },
				{ 'e', 3, 15 } };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf(
		"Following is maximum profit sequence of jobs %d\n",n);

	// Function call
	printJobScheduling(arr,n);
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)
