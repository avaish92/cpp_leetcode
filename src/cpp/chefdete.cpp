#include<iostream>
#include<vector>
#include<cstdio>
#include<math.h>
#include<cstdlib>

#define tr(container, it) \ for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define getcx getchar_unlocked()
#define LLI long long int
#define LD long double
#define FOR(i) for(int i=0;i<n;++i)
#define W(t) while(t--)

using namespace std;

int main()
{
	LLI n;	
	scanf("%lld",&n);
	vector<bool> A(n);
	LLI arr[n];
	FOR(i)
	{
		scanf("%lld",&arr[i]);
		if(arr[i]>0)
			A[arr[i]-1] = 1;
	}
	FOR(i)
	{
		if(A[i] == 0)
			printf("%d ",i+1);
	}
	printf("\n");
return 0;
}
