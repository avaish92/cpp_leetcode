#include<iostream>
using namespace std;
int v[100005],poz[100005];
int main()
{
    int n,l=1,lmax=-1;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>v[i];
        poz[v[i]]=i;
    }
     for(int i=1;i<n;++i)
     {
         if(poz[i]<poz[i+1])
            ++l;
         else
         {
            if(l>lmax)
                lmax=l;
            l=1;
        }
     }
     if(l>lmax)
        lmax=l;
    cout<<l<<endl;
    cout<<n-lmax<<endl;
    return 0;
}
