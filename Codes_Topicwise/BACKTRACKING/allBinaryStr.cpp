#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N=0;
	cin >> N;
	vector <string> names;
	string temp;

	for(int i=0;i<N;i++)
	{
		cin >> temp;
		names.push_back(temp);
		temp = "";
	}

	for(int i=0;i<N;i++)
	{
		cout << names[i] << endl;
	}

}