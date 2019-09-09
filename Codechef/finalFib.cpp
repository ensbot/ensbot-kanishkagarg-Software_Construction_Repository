#include<bits/stdc++.h> 


using namespace std; 

long long int highestPowerof2(long long int n) 
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
    int first = 0;
    int second = 1;

    int res;

    for (int i = 2; i <= n; i++) {
        res = (first + second) % 10;
        first = second;
        second = res;
    }

    return res; 
} 
  




int main() 
{ 	
	int t;
	cin >> t;
	
	while(t>0)
	{
    long long int N;
	cin >> N; 
	//cout << "N: " << N << endl;
	long long int index = 0;
    index =  highestPowerof2(N); 
    //cout << "INDEX " << pow(2,index)-1<< endl;
    long long int ans = 0;
    //ans = fib(pow(2,index)-1);
    ans = fib(index-1);
    //cout << "ANS " << ans << endl;
    cout << ans;



    	t--;
	}
	return 0;
	
} 