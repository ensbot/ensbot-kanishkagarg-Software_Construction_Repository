#include <iostream>

using namespace std;


int score(int n)
{
	if(n<0)
		return 0;
	if(n==0)
		return 1;
	
	return score(n-50) + score(n-20) + score(n-10);
}

int main()
{
	int ans = 0;
	ans = score(50);
	cout << ans; 
}