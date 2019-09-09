#include <iostream>

using namespace std;


int way(int arr[3][3],int i,int j)
{
	if(i<0 || j<0)
		return 0;
	if(i==0 && j==0)
		return 1;
	
	return way(arr,i-1,j)+way(arr,i,j-1);
}

int main()
{
	int arr[3][3]={0};
	int ans = way(arr,2,2);
	cout << ans;

}