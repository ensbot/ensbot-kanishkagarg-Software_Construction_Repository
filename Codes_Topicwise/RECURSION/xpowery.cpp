#include <iostream>
#include <string>

using namespace std;

int power(int x, int y)
{
	if(y==0)
		return 1;
	return x * power(x,y-1);
}

int main()
{	
	int ans = 0;
	ans = power(2,2);
	cout << ans ; 
}