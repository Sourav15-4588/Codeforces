#include<bits/stdc++.h>
using namespace std;
 #define endl '\n'
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int alice, alcd[51], bob, bocd[51];
		int a=0, b=0;
		cin>>alice;
		for(int i=0; i<alice; i++)
		{
			cin>>alcd[i];
			if(alcd[i] > a)
				a=alcd[i];
		}
		
		cin>>bob;
		for(int i=0; i<bob; i++)
		{
			cin>>bocd[i];
			if(bocd[i] > b)
				b=bocd[i];
		}
		
		if(a>=b)
			cout<<"Alice\n";
		else cout<<"Bob\n";
		
		if(b>=a)
			cout<<"Bob\n";
		else cout<<"Alice\n";	
	}
	
	return 0;
}
