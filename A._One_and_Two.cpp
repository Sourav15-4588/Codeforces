#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int t=0, o=0, po;
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(a[i]==2)
				t++;
		}
		if(t%2!=0)
			cout<<-1<<endl;
		else if(t%2==0)
		{
			for(int i=0; i<n; i++)
			{
				if(a[i]==2)
					o++;
				if(o==t/2) 
				{
					po=i;
					break;
				}
			}
			cout<<po+1<<endl;
		}
		else cout<<1<<endl;

	}

	return 0;
}


 //for(int& i : ar) cin>>i,sum+=i;
 // for(int i=0; i<n; i++) cin>>ar[i],sum+=ar[i];