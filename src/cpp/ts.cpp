#include<cstdio>
#include<cmath>
#include<cassert>
#include<cstdlib>
#include<string>
#include<iostream>

using namespace std;

#define SCAN_str scanf(" %[^\n]s",str)
#define LLI long long int
#define ULL unsigned long long int
#define LI long int
#define LD long double
#define FOR(i) for(i=0;i<n;i++)
#define LOOP(j) for(j=0;j<n;j++)
#define W(t) while(t--)
#define getcx getchar_unlocked()

int main()
{
	string s;
	int p,q,i=1,n,k=0;
	scanf("%d",&n);
	scanf("%d%d",&p,&q);
	cin>>s;
	if (p+q > n)
	{
		if(p%n == 0)
		{
			while(i<=s.length())
			{
				cout<<s.substr(k,p)<<endl;
				k=p;
				i*=p;
			}
		}
		else if(q%n == 0)
		{
			while(i<=s.length())
			{
				cout<<s.substr(k,q)<<endl;
				k=q;
				i*=q;
			}
		}
		else
				cout<< -1<<endl;
	}
		else if(p+q <= n)
		{
			if(p+q ==n)
			{
				cout<<s.substr(0,p)<<endl;
				cout<<s.substr(p+1,q)<<endl;
			}
			else
				cout<< -1<<endl;
		}
return 0;
}
