#include<bits/stdc++.h>

#define ll long long
using namespace std;

int dp[105][30010];
ll n,k,i,j,sum,ar[105];

int f(int ind,ll sum)
{
    if(ind>n)
    {
       if(sum==k)
            return true;
       else
        return false;
    }
    if(dp[ind][sum]!=-1)
        return dp[ind][sum];
    else
        return dp[ind][sum]=f(ind+1,sum)||f(ind+1,sum-ind)||f(ind+1,sum+ind)||f(ind+1,sum-2*ar[ind]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
 
        cin>>n>>k;
        sum=0;
        for(i=1;i<=n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        k+=10010;
        sum+=10010;
        memset(dp,-1,sizeof(dp));
 
        if(f(1,sum))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
 
    return 0;
 
}