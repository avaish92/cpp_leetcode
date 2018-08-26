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
	int n,t,h,x,i,l,s;
	int t1,t2;
	scanf("%d",&t);
	W(t)
	{
		t1=0;t2=0;
		scanf("%d%d%d%d",&n,&h,&x,&i);
		scanf("%d%d",&l,&s);
		t1=abs(x-h)*l+abs(h-i)*l;
		t2=abs(h-i)*s;
		if((t1==0) || (t2==0) || (t1>t2))
			printf("STAIRS\n");
		else
			printf("LIFT\n");
	}
return 0;
}
