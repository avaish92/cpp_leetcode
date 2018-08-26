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
#define FOR(i) for(i=0;i<strlen(str);i++)
#define LOOP(j) for(j=0;j<n;j++)
#define W(t) while(t--)
#define getcx getchar_unlocked()

int main()
{
	int t;
	char *str;
	short int *arr,flag=0;
	int i;
	scanf("%d",&t);
	W(t)
	{
		arr=NULL;
		str=NULL;
		flag=0;
		arr = calloc(5,sizeof(int));
		str= (char *)realloc(str,1000);
		scanf("%s",str);
		FOR(i)
		{
			if((*(str+i) == 'L'))
			{
				arr[0]+=1;
			}
			else if((*(str+i) == 'T'))
			{
				arr[1]+=1;
			}
			else if((*(str+i) == 'I'))
			{
				arr[2]+=1;
			}
			else if((*(str+i) == 'M'))
			{
				arr[3]+=1;
			}
			else if((*(str+i) == 'E'))
			{
				arr[4]+=1;
			}
			if((arr[0]>=2) && (arr[1]>=2) && (arr[2]>=2) && (arr[3]>=2) && (arr[4]>=2))
			{
				flag =1;
				break;
			}
		}
		if(flag==1)
			printf("YES\n");
		else
			printf("NO\n");
		free(arr);
		free(str);
	}
return 0;
}
