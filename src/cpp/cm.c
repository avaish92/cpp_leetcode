#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

#define LLI long long int
#define LI long int
#define LD long double
#define FOR(i) for(i=0;i<l;i++)
#define LOOP(j) for(j=0;j<n;j++)
#define W(t) while(t--)
#define getcx getchar_unlocked()

int main()
{
	int t,h,n,m;
	int ej,is,hi;
	float fs;
	scanf("%d",&t);
	W(t)
	{
		ej=0;
		is=0;
		fs=0;
		hi=0;
		scanf("%d%d%d",&h,&n,&m);
		if((h%(n-m))==0)
		{
			is=(h/(n-m))-1;
			fs=is+((h-is*n)/n);
		}
		else
		{
			is=h/(n-m);
			hi=h-is;
			fs=is+(hi/n);
		}
		printf("%f\n",fs);
	}
return 0;
}
