#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n;
		int a[n+1];
		for(int i=1; i<=n; i++)
			cin>>a[i];
			
		cin>>m;
		int b[m+1], sum=0;
		for(int i=1; i<=m; i++)
		{
			cin>>b[i];
			sum=sum+b[i];
		}
		
		int c=1;
		for(int i=1; i<=sum; i++)
		{
			c++;
			if(c==n && i<sum)
				c=0;
		}
		cout<<a[c]<<endl;
	}
	
	return 0;
}