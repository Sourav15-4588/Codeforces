#include<stdio.h>
int main()
{
    int n,t,ans;
    scanf("%d",&t);    //input the test case number

    while (t>0)
      {
       scanf("%d",&n);     // input the candies  
       if (n%2==0)
         ans=(n/2)-1;

       else ans=(n-1)/2;
       printf("%d\n",ans);
    t--;
      }

    return 0;
}
