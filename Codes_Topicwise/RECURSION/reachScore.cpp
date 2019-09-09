#include <iostream>

using namespace std;


int score(int n)
{
	if(n<0)
		return 0;
	if(n==0)
		return 1;
	return score(n-1) + score(n-4) + score(n-6);
}

int main()
{
	int ans = 0;
	ans = score(7);
	cout << ans; 
}