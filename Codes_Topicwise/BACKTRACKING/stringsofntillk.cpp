#include <bits/stdc++.h>

using namespace std;

void printTheArray(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
    } 
    cout << endl; 
} 

void generateAllBinaryStrings(int n, int arr[], int k)
{
	if(n<1)
	{
		printTheArray(arr,n);
		return;
	}
	else
	{
		for(int j=0;j<k;j++)
		{
			arr[n-1]=j;
			generateAllBinaryStrings(n-1,arr,k);
		}
		
	}
	
}

int main() 
{ 
    int n = 2; 
    int arr[n]; 
    generateAllBinaryStrings(n, arr, 3); 
    return 0; 
} 