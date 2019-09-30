#include<bits/stdc++.h>
using namespace std;

void filehandling(string s){
	ofstream fout;
	try{
		fout.open(s);
	}
	catch(...){
		cout<<"file not found";
	}
	return;
}

int main(){
	int a[6];
	int k = 5;
	while(k--){
		cin>>a[k];
	}
	try{
		if ((k+1) == 0){
			throw "invalid value of k";
		}
		int val = a[1]/(k+1);
	}
	catch(string s){
		cout<<"caught:-"<<s<<endl;
	}
	int sum = a[0]+a[2]+a[4];
	try{
		a[5] = sum;
	}
	catch(...){
		cout<<"array out of bounds"<<endl;
	}
	cout<<sum<<endl;

	filehandling("file1.xml");
}