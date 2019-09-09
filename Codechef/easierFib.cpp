#include <bits/stdc++.h>

using namespace std;

long long int fib(long long int N)
{
	if((N==1)||(N==0)) 
	{
      return(N);
   	}
   else {
      return(fib(N-1)+fib(N-2));
   }
}

int main()
{	
	int t;
	cin >> t;
	
	while(t>0)
	{
		long long int N;
		cin >> N;
		vector <long long int> D;
		long long int j = 0;
		long long int ans = 0;
	
		while(j <= N/2) {
		ans = fib(j)%10;
		
      	D.push_back(ans);
      	j++;
   		}
   		
   		cout << D.at(N/2);
   	t--;
	}
	return 0;
	
}