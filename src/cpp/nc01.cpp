#include<cstdio>
#include<cmath>
#include<cassert>
#include<cstdlib>
#include<cstring>

using namespace std;

#define SCAN_str scanf(" %[^\n]s",str)
#define LLI long long int
#define ULL unsigned long long int
#define LI long int
#define LD long double
#define FOR(i) for(i=0;i<n;i++)
#define LOOP(j) for(j=0;j<n;j++)
#define W(t) while(t--)
#define getcx getchar_unlocked()

bool isPrime (int num)
{
    if (num <=1)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;
        double num_d = static_cast<double>(num);
        int upperLimit = static_cast<int>(sqrt(num_d) +1);
        
        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                prime = false;
            divisor +=2;
        }
        return prime;
    }
}
int main()
{
	int t;
	int m,n,count,num;
	scanf("%d",&t);
	W(t)
	{
		scanf("%d%d",&n,&m);
		if((n % 2) == 0)
		{
			if((m == n-1) || (m == 1))
				printf("YES\n");
			else
			{
				num = m+1;
				count =1;
				while((num!=1) && (count<=n))
				{
					num = (num+m)%n;
					++count;
				}
				if(count == n)
					printf("Yes\n");
				else
					printf("No %d\n",count);
			}
		}
		else
		{
			if(isPrime(n) || ((m == n-1) || (m==1) || (m == n/2) ||(m == (n/2)+1) || (m == 2)))
				printf("YES\n");
			else
			{	
				num = m+1;
				count = 1;
				while((num!=1) && (count<=n))
				{
					num = (num+m)%n;
					++count;
				}
				if(count == n)
					printf("Yes\n");
				else
					printf("No %d\n",count);
			}
		}
		
	}
return 0;
}
