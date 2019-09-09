#include <bits/stdc++.h>

using namespace std;

int isArraySorted(int A[],int n)
{
	if(n==1)
		return 1;
	return (A[n-1]<A[n-2])?0:isArraySorted(A,n-1);
}

int main()
{
	int arr[5]={1,2,3,4,5};
	int ans = isArraySorted(arr,5);
	cout << ans;
	return 0;
}