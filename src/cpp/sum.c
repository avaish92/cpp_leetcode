#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

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
	int t,i;
	ULL n,sum1;
	LLI sum2;
	scanf("%d",&t);
	W(t)
	{
		sum1 = 0;
		sum2 = 0;
		i = 1;
		scanf("%lld",&n);
		sum1 = ((n*(1+n))>>1);
		/*while(i<=n)
		{
			sum2 -= i;
			i <<= 1;
		}*/
		printf("%d\n",sum1);
		//printf("%lld\n",sum1+(sum2<<1));
	}
return 0;
}
