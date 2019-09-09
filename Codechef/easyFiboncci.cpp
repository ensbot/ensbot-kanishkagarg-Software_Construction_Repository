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

vector <long long int> doRemoval(vector <long long int> D)
{	
	vector <long long int> E;
	for(int j =0; j<D.size(); j++)
	{	
		
		if(j%2 != 0)
		{
				E.push_back(D.at(j));
				
		}
		}
	return E;
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
		
		
		while(j < N) {
		ans = fib(j)%10;
		
      	D.push_back(ans);
      	j++;
   		}
   		

   	vector <long long int> E = D;
   	
   	while(N>1)
   	{
   		E = doRemoval(E);
   		E.shrink_to_fit();
   		
   		N = N/2;
   	}
 	
 	long long int key = 0;
   	for(long long int i =0 ;i<E.size(); i++)
   	{	
   		cout << E.at(i) <<endl;
   		key = E.at(i);
   	}
   		

   	////////////

	std::vector<long long int>::iterator itr = std::find(D.begin(), D.end(), key);

	if (itr != D.cend()) {
		std::cout << "Element present at index " << 
					std::distance(D.begin(), itr);
	}
   
	////////////

   	D = std::vector<long long int>();
   	E = std::vector<long long int>();
   	t--;
	}
	return 0;
	
}




