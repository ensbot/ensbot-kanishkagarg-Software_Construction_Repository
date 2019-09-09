#include<bits/stdc++.h> 

using namespace std; 

const int MAX = 1000; 
  
// Create an array for memoization 
int f[MAX] = {0}; 

int highestPowerof2(long long int n) 
{ 
  if (n < 1) 
        return 0; 
  
    int res = 1; 
  
    // Try all powers starting from 2^1 
    for (int i=0; i<8*sizeof(unsigned int); i++) 
    { 
        int curr = 1 << i; 
  
        // If current power is more than n, break 
        if (curr > n) 
           break; 
  
        res = curr; 
    } 
  
    return res; 
} 
long long int fib(long long int n)
{	
	double phi = (1 + sqrt(5)) / 2; 
  return round(pow(phi, n) / sqrt(5)); 
}
// Driver code 
int main() 
{ 	
	int t;
	cin >> t;
	
	while(t>0)
	{
    long long int N;
	cin >> N; 
	//cout << "N: " << N << endl;
	int index = 0;
    index =  highestPowerof2(N); 
    //cout << "INDEX " << pow(2,index)-1<< endl;
    long long int ans = 0;
    ans = fib(index-1);
    //cout << "ANS " << ans << endl;
    cout << abs(ans%10);



    	t--;
	}
	return 0;
	
} 





