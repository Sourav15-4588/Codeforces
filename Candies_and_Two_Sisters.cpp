#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int n,t,ans;
    cin>>t;    //input the test case number

    while (t--)
      {
       cin>>n;     // input the candies  
       if (n%2==0)
         ans=(n/2)-1;

       else ans=(n-1)/2;
       cout<<ans<<endl;
      }

    return 0;
}
