#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>

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
	LLI a,b,c;
	LLI x,y,z,sum1,sum2;
	scanf("%lld%lld%lld",&a,&b,&c);
	scanf("%lld%lld%lld",&x,&y,&z);
	sum1 = a+b+c;
	sum2 = x+y+z;
	if((sum1 >0 ) && ((sum1/2 == sum2) || (sum2 == (sum1/2+1))))
		printf("Yes\n");
	else
		printf("No\n");
return 0;
}
