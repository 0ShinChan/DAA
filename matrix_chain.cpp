// C++ program using memoization
#include <bits/stdc++.h>
using namespace std;


// Function for matrix chain multiplication
int matrixChainMemoised(int* p, int i, int j)
{
    if(i==j)
        return 0;

        int cnt;
        int k;
        int mini =INT_MAX;

        for(k=i;k<j;k++){

            cnt=matrixChainMemoised(p,i,k) + matrixChainMemoised(p,k+1,j)+ p[i-1]*p[k]*p[j];

            mini = min(cnt,mini);
        }

        return mini;
}

// Driver Code
int main()
{
	int arr[] = { 1, 2, 3, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	

	cout << "Minimum number of multiplications is "
		<< matrixChainMemoised(arr,1,n-1);
}

// This code is contributed by Sumit_Yadav
