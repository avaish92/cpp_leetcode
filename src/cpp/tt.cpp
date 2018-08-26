#include<iostream>
#include<sstream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<math.h>
#include<cstring>
#include<cstdlib>
#include<cassert>

#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define getcx getchar_unlocked()
#define LLI long long int
#define LD long double
#define FOR(i) for(i=0;i<n;++i)
#define W(t) while(t--)

using namespace std;

int main()
{
	int n,b,p;
	cin >>n>>b>>p;
	cout << ((n-1)*2)*b + (n-1)<<" "<<n*p;
return 0;
}
