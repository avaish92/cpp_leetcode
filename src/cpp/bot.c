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
	LLI x1,x2,y1,y2;
	LLI step1,step2;
	scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
	step1 = abs(x1-x2);
	step2 = abs(y1-y2);
	if(step1 > step2)
		printf("%lld\n",step1);
	else
		printf("%lld\n",step2);
return 0;
}
