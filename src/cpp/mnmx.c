#include<stdio.h>
#include<stdlib.h>
#define FOR(i,n) for(i=0;i<(n-1);i++)
#define LOOP(j,n) for(j=0;j<(n-1);j++)
int main()
{
	int t,n,i,tmp,count,j;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&n);
		int arr[n];
		FOR(j,n)
			scanf("%d",&arr[j]);
		FOR(i,n)
		{
			if(arr[i]>arr[i+1])
			{
				count+=arr[i+1];
			}
			else
			{
				count+=arr[i];
				tmp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=tmp;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
