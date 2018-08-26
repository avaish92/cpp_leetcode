#include<cstdio>
#include<cmath>
//#include<assert.h>
#include<cstdlib>
#include <bits/stdc++.h>
//#include<fcntl.h>

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

void scanint(long long int &x)

{

  char c = getchar_unlocked();

  while(c<'0' || c>'9')

   {

   	c = getchar_unlocked();

   }


  x=0;

  while(c>='0' && c<='9')

  {

   x = 10 * x + c - 48;

   c = getchar_unlocked();

  }

}

int main()
{
	int t;
	LLI m,n,count,num;
	scanf("%d",&t);
	W(t)
	{
		count = 1;
		//scanf("%lld%lld",&n,&m);
		scanint(n);
		scanint(m);
		num = m+1;
		while((num!=1) && (count<=n))
		{
			num = (num+m)%n;
			++count;
		}
		if(count == n)
			printf("Yes\n");
		else
			printf("No %d\n",count);
	}
return 0;
}
