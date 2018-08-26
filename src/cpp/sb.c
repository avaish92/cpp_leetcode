#include<stdio.h>

#define LLI long long int
#define LI long int
#define LD long double
#define FOR(i) for(i=0;i<n;i++)
#define LOOP(j) for(j=0;j<n;j++)
#define W(t) while(t--)
#define getcx getchar_unlocked()

int main()
{
	int t;
	LLI n,i;
	LLI sum,can,max;
	unsigned LLI tot;
	scanf("%d",&t);
	W(t)
	{
		sum=0;
		max=0;
		scanf("%lld",&n);
		LLI arr[n];
		FOR(i)
		{
			scanf("%lld",&arr[i]);
			if(arr[i]>max)
				max=arr[i];
			sum+=arr[i];
		}
		tot=(max*n);
		can=tot-sum;
		printf("%lld\n",can);
	}
return 0;
}
