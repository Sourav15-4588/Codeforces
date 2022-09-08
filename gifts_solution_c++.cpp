#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, a;
	cin>>n>>k>>a;
	int c=a-1;

	for(int i=1; i<=k; i++)
	{
		if(c==n)
		 c=1;
		else
		 c++;
		
	}
	cout<<c<<endl;
	
	return 0;
}