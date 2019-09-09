#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i=0; i<t; i++)
	{
		int N;
		string firstName[100];
		string lastName[100];

		cin >> N;
		int c = 0;
		for(int j=0; j<N; j++)
		{
			cin >> firstName[j] >> lastName[j];
			
		}
		for(int j=0;j<N;j++)
	    {
	        for(int k=0;k<N;k++)
	        {
	            if(firstName[j]==firstName[k])
	            	c=c+1;
	        }
	        if(c==1)
	        cout << firstName[j] <<endl;
	        if(c>1)
	        cout << firstName[j] << " " << lastName[j] <<"\n";
	        c = 0;
	    }
	}
	return 0;
}