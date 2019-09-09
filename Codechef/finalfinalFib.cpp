#include <bits/stdc++.h>

using namespace std;

signed long long int highestPowerof2(signed long long int n) 
{ 	
	//Invariant: n is of the datatype long long long int
	//Pre-condtition: 
	// Invalid input 
   signed long long int p = (signed long long int)log2(n); 
   return (signed long long int)pow(2, p);  
}

// Finds nth fibonacci number 
signed long long int fib(signed long long int f[], signed long long int n) 
{ 
    // 0th and 1st number of 
    // the series are 0 and 1 
    f[0] = 0; 
    f[1] = 1; 
  
    // Add the previous 2 numbers  
    // in the series and store  
    // last digit of result 
    for (signed long long int i = 2; i <= n; i++) 
        f[i] = (f[i - 1] + f[i - 2]) % 10; 
  
    return f[n]; 
} 
  
// // Returns last digit of n'th Fibonacci Number 
// int findLastDigit(signed long long int n) 
// { 
//     signed long long int f[60] = {0}; 
  
//     // Precomputing units digit of   
//     // first 60 Fibonacci numbers 
//     fib(f, 60); 
  
//     return f[n % 60]; 
// } 



int main() 
{ 	
	int t;
	cin >> t;
	signed long long int f[60] = {0}; 
	fib(f, 60); 
	
	while(t>0)
	{	
		signed long long int N;
		cin >> N; 

		if(N==1)
		{
			cout << "0" << endl;

		}

		//cout << "N: " << N << endl;
		else
		{
			signed long long int index = 0;
		    index =  highestPowerof2(N); 
		    //cout << "INDEX " << index-1<< endl;
		    signed long long int ans = 0;
		    
		    ans = f[(index-1)%60];
		    //cout << "ANS " << ans << endl;
		    cout << ans%10;
		}
		

		t--;
	}
	return 0;
	
} 