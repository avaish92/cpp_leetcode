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
#define getcx getchar_unlocked()

int main()
{
	ULL n,small = 10000000005,i,count = 0;
	ULL sum = 0;	
	scanf("%lld",&n);
	ULL arr[n];
	FOR(i)
	{	
		scanf("%lld",&arr[i]);
		if(arr[i]%2 == 1)
		{
			if(arr[i] < small)
				small = arr[i];
			sum += arr[i];
			++count;
			
		}
		else
			sum += arr[i];
	}
	//printf("%lld\n",(small*5)-small);
	if(count % 2 == 1)
		printf("%lld\n",(sum - small));
	else
		printf("%lld\n",sum);
return 0;
}
