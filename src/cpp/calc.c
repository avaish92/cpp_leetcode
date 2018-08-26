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
	int a,b;
	ULL sum;
	int n,d;
	scanf("%d%d",&a,&b);
	int arr[10]={6,2,5,5,4,5,6,3,7,6};
	while(a <= b)
	{
		n =a;
		while(n)
		{
			d = n%10;
			sum+= arr[d];
			n/=10;
		}
		++a;
	}
	printf("%d\n",sum);
return 0;
}
